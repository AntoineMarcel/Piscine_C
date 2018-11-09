/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 09:01:39 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/10 17:19:25 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int	d;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			d = b + 1;
			while (d <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(d++);
				if (!(a == '7'))
					ft_putchar(',');
				if (!(a == '7'))
					ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
