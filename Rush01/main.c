/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:12:01 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/18 23:39:32 by amarcel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	affichage(int grille[9][9]);
int		fonctionprincipale(int grille[9][9], int position);
void	ft_putchar(char c);

void	ft_error(void)
{
	ft_putchar('E');
	ft_putchar('r');
	ft_putchar('r');
	ft_putchar('o');
	ft_putchar('r');
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int ligne;
	int colonne;
	int comp;
	int grille[9][9];
	int comp2;

	ligne = 1;
	colonne = 0;
	comp = 0;
	comp2 = 0;
	if (argc != 10)
	{
		ft_error();
		return (0);
	}
	while (argv[ligne])
	{
		while (argv[ligne][colonne])
		{
			while (argv[ligne][comp])
				comp++;
			if (comp != 9)
			{
				ft_error();
				return (0);
			}
			grille[ligne - 1][colonne] = argv[ligne][colonne] - '0';
			if (grille[ligne - 1][colonne] == -2)
			{
				grille[ligne - 1][colonne] = 0;
				comp2++;
			}
			colonne++;
		}
		comp = 0;
		colonne = 0;
		ligne++;
	}
	if (comp2 > 64)
	{
		ft_error();
		return (0);
	}
	if (fonctionprincipale(grille, 0) != 1)
		affichage(grille);
	else
		ft_error();
	return (0);
}
