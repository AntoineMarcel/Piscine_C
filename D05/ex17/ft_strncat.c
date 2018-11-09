/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 14:44:09 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/20 12:22:05 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
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
	while (i < nb && src[i])
	{
		dest[taille + i] = src[i];
		i++;
	}
	dest[taille + i] = '\0';
	return (dest);
}
