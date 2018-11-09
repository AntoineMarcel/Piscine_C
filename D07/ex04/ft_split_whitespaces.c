/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 13:07:47 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/25 17:30:23 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int i;
	int nb_word;

	i = 0;
	nb_word = 0;
	if (!(*str))
		return (0);
	if (!(str[0] == '\t' || str[0] == '\n' || str[0] == ' '))
		nb_word = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		{
			if (!(str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == ' ')
					&& str[i + 1] != '\0')
			{
				nb_word++;
				i++;
			}
		}
		i++;
	}
	return (nb_word);
}

char	**ft_strdup(char *str, int i, char **tab)
{
	int j;
	int nb_char;

	nb_char = 0;
	j = 0;
	while (!(str[j] == '\t' || str[j] == '\n' ||
				str[j] == ' ') && str[j] != '\0')
	{
		nb_char++;
		j++;
	}
	tab[i] = (char *)malloc(sizeof(char) * nb_char + 1);
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (!(str[j] == '\t' || str[j] == '\n' ||
				str[j] == ' ') && str[j] != '\0')
	{
		tab[i][j] = str[j];
		j++;
	}
	tab[i][j] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	char	**tab;

	i = 0;
	k = ft_count_words(str);
	tab = malloc(sizeof(char *) * k + 1);
	if (tab == NULL)
		return (NULL);
	while (i < k)
	{
		while (*str == '\t' || *str == '\n' || *str == ' ')
			str++;
		ft_strdup(str, i, tab);
		while (!(*str == '\t' || *str == '\n' || *str == ' ') && *str != '\0')
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
