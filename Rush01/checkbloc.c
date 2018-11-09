/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkbloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:09:12 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/18 20:13:35 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkbloc(int numero, int grille[9][9], int ligne, int colonne)
{
	int debutligne;
	int debutcolonne;

	debutligne = ligne - (ligne % 3);
	debutcolonne = colonne - (colonne % 3);
	ligne = debutligne;
	while (ligne < debutligne + 3)
	{
		colonne = debutcolonne;
		while (colonne < debutcolonne + 3)
		{
			if (grille[ligne][colonne] == numero)
				return (1);
			colonne++;
		}
		ligne++;
	}
	return (0);
}
