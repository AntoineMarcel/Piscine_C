/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:24:44 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/11 10:28:39 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	putnbr2(int nb, int i, int a)
{
	while (nb / i > 10)
		i = i * 10;
	while (i >= 10)
	{
		a = nb % i;
		ft_putchar('0' + ((nb - a) / i));
		i = i / 10;
		nb = a;
	}
	ft_putchar('0' + nb);
}

void	ft_putnbr(int nb)
{
	int a;
	int b;
	int i;

	i = 10;
	if (nb < 0)
		ft_putchar('-');
	if (nb == -2147483648)
		nb = nb + 1;
	if (nb < 0)
		nb = nb * -1;
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		putnbr2(nb, i, a);
	}
}
