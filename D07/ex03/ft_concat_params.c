/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:18:19 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/25 17:39:25 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params2(int argc, int taille, char **argv, int d)
{
	int		i;
	int		n;
	char	*tab;

	i = 1;
	n = 0;
	tab = malloc((taille + 1) * sizeof(char));
	while (argv[i])
	{
		while (argv[i][n])
		{
			tab[d] = argv[i][n];
			d++;
			n++;
		}
		n = 0;
		if (i < argc - 1)
			tab[d] = '\n';
		else
			tab[d] = '\0';
		d++;
		i++;
	}
	tab[d] = '\0';
	return (tab);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		n;
	int		taille;
	char	*tab;
	int		d;

	d = 0;
	taille = 0;
	i = 1;
	n = 0;
	while (argv[i])
	{
		while (argv[i][n])
		{
			taille = taille + 1;
			n++;
		}
		i++;
	}
	tab = ft_concat_params2(argc, taille, argv, d);
	return (tab);
}
