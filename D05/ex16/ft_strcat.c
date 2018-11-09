/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 12:14:48 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/20 12:20:09 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int taille;
	int i;

	i = 0;
	taille = 0;
	while (dest[i])
	{
		i++;
		taille++;
	}
	i = 0;
	while (src[i])
	{
		dest[taille + i] = src[i];
		i++;
	}
	dest[taille + i] = '\0';
	return (dest);
}
