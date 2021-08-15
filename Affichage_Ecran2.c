/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Affichage_Ecran2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:27:14 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 18:12:10 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == ESC)
		Free_All_Fonctions(data);
	if (keysym == XK_Right)
		Deplacement_Personnage_Droite(data);
	if (keysym == XK_Left)
		Deplacement_Personnage_Gauche(data);
	if (keysym == XK_Down)
		Deplacement_Personnage_Down(data);
	if (keysym == XK_Up)
		Deplacement_Personnage_Up(data);
	if (keysym == D)
		Deplacement_Personnage_Droite(data);
	if (keysym == A)
		Deplacement_Personnage_Gauche(data);
	if (keysym == S)
		Deplacement_Personnage_Down(data);
	if (keysym == W)
		Deplacement_Personnage_Up(data);
	if (keysym == K)
		Animation_Kamehameha(data);
		
	return (0);
}

int	render(t_data *data)
{
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->img.mlx_img, 0, 0);
	return (0);
}
