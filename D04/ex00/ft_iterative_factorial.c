/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 08:46:40 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/15 12:01:19 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb >= 2 && nb <= 12)
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	return (0);
}
