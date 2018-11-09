/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkligne.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:07:46 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/18 20:15:19 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkligne(int numero, int grille[9][9], int ligne)
{
	int colonne;

	colonne = 0;
	while (colonne < 9)
	{
		if (grille[ligne][colonne] == numero)
			return (1);
		colonne++;
	}
	return (0);
}
