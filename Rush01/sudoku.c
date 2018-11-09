/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 17:54:02 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/18 20:32:21 by alopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);
void	affichage (int grille[9][9]);
int		checkligne (int numero, int grille[9][9], int ligne);
int		checkcolonne (int numero, int grille[9][9], int colonne);
int		checkbloc (int numero, int grille[9][9], int ligne, int colonne);

int		fonctionprincipale(int grille[9][9], int position)
{
	int	numero;
	int	ligne;
	int	colonne;

	numero = 1;
	ligne = position / 9;
	colonne = position % 9;
	if (position == 9 * 9)
		return (0);
	if (grille[ligne][colonne] != 0)
		return (fonctionprincipale(grille, position + 1));
	while (numero <= 9)
	{
		if (checkligne(numero, grille, ligne) == 0 &&
				checkcolonne(numero, grille, colonne) == 0
				&& checkbloc(numero, grille, ligne, colonne) == 0)
		{
			grille[ligne][colonne] = numero;
			if (fonctionprincipale(grille, position + 1) == 0)
				return (0);
		}
		numero++;
	}
	grille[ligne][colonne] = 0;
	return (1);
}
