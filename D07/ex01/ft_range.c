/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:40:22 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/27 11:44:59 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int taille;
	int *tab;

	tab = 0;
	i = 0;
	if (min >= max)
		return (tab);
	taille = max - min;
	tab = malloc(taille * sizeof(int));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
