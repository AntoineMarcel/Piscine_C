/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:05:15 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/18 20:07:25 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	affichage(int grille[9][9])
{
	int ligne;
	int colonne;

	ligne = 0;
	colonne = 0;
	while (ligne < 9)
	{
		colonne = 0;
		while (colonne < 9)
		{
			ft_putchar(grille[ligne][colonne] + '0');
			if (!(colonne == 8))
				ft_putchar(' ');
			colonne++;
		}
		ft_putchar('\n');
		ligne++;
	}
}
