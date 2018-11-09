/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcolonne.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 18:08:29 by amarcel           #+#    #+#             */
/*   Updated: 2018/02/18 20:08:36 by abelkhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checkcolonne(int numero, int grille[9][9], int colonne)
{
	int ligne;

	ligne = 0;
	while (ligne < 9)
	{
		if (grille[ligne][colonne] == numero)
			return (1);
		ligne++;
	}
	return (0);
}
