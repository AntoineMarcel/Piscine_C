/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 08:45:42 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/16 09:43:11 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int n)
{
	int i;

	i = 0;
	while (i * i < n)
	{
		i++;
		if (i * i > n)
		{
			return (0);
		}
	}
	return (i);
}
