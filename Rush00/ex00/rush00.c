/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:07:17 by schabbi           #+#    #+#             */
/*   Updated: 2018/02/10 16:23:52 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int y, int x, int x_init, int y_init)
{
	if ((y == y_init) || (y == 1))
	{
		if (x != x_init)
		{
			ft_putchar('-');
		}
		if (x == 1)
		{
			if (y == y_init)
				ft_putchar('o');
			if (y == 1 && y_init != 1)
				ft_putchar('o');
		}
	}
	else
	{
		if (x != x_init)
			ft_putchar(' ');
		if (x == 1)
			ft_putchar('|');
	}
}

void	rush(int x, int y)
{
	int y_init;
	int x_init;

	y_init = y;
	x_init = x - 1;
	if ((y <= 0) || (x <= 0))
		return ;
	while (y)
	{
		if (y == y_init)
			ft_putchar('o');
		if (y == 1 && y_init != 1)
			ft_putchar('o');
		if ((y != y_init) && (y != 1))
			ft_putchar('|');
		x = x_init;
		while (x)
		{
			print_line(y, x, x_init, y_init);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
