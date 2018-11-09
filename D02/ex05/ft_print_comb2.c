/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 18:37:40 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/11 10:04:58 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_nb2(char a, char b, char d, char e)
{
	while (d <= '9')
	{
		while (e <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(d);
			ft_putchar(e++);
			if (!(a == '9' && b == '8'))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		d++;
		e = '0';
	}
}

void	ft_print_comb2(void)
{
	int a;
	int	b;
	int d;
	int e;

	a = '0';
	b = '0';
	d = '0';
	e = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			print_nb2(a, b, d, e);
			b++;
			d = a;
			e = b + 1;
		}
		a++;
		b = '0';
	}
}
