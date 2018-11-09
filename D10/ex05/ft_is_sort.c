/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 18:43:15 by amarcel           #+#    #+#             */
/*   Updated: 2018/03/01 17:31:43 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int d;
	int c;

	i = 0;
	d = 0;
	c = 0;
	if (length < 2)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			c = -1;
		if (f(tab[i], tab[i + 1]) < 0)
			d = 1;
		i++;
	}
	if (c == -1 && d == 1)
		return (0);
	return (1);
}
