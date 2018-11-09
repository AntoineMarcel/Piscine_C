/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 15:26:39 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/12 08:20:15 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	char	c;
	int		nb;

	nb = 0;
	c = 0;
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	count--;
	while (nb <= count)
	{
		c = str[nb];
		str[nb] = str[count];
		str[count] = c;
		count--;
		nb++;
	}
	return (str);
}
