/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deplacements_Personnages2.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:07:02 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 11:41:54 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Affichage_Deplacement_Image_Droite(t_data *data)
{
	Animation_Personnage_Droite(data);
}

void	Affichage_Deplacement_Image_Gauche(t_data *data)
{
	Animation_Personnage_Gauche(data);
}

void	Affichage_Deplacement_Image_Up(t_data *data)
{
	Animation_Personnage_Up(data);
}

void	Affichage_Deplacement_Image_Down(t_data *data)
{
	Animation_Personnage_Down(data);
}