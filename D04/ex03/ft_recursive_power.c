/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 14:54:44 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/14 16:14:51 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	else
	{
		nb = res * ft_recursive_power(res, power - 1);
	}
	return (nb);
}
