/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:10:59 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/21 19:17:10 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr2(long int n)
{
	int taille;

	taille = 10;
	while (n / taille >= 10)
		taille = taille * 10;
	while (taille >= 1)
	{
		ft_putchar(((n / taille) % 10) + '0');
		taille = taille / 10;
	}
}

void	ft_putnbr(int nb)
{
	long int n;

	n = nb;
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr2(n);
	}
}
