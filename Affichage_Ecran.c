/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Affichage_Ecran.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:39:38 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/13 11:15:51 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#define RED_PIXEL 0xFF0000

void	Calcul_Width_Height(t_data *data)
{
	data->i = data->width * 60;
	if (data->i > 2046)
		data->i = 2046;
	data->j = data->height * 60;
	if (data->j > 1040)
		data->j = 1040;
}

void	Affichage_Game(t_data *data)
{
	int i;
	
	i = 0;
	data->win_ptr = mlx_new_window(data->mlx_ptr, data->i,
			data->j, "Bomberman 2.0");
	if (data->win_ptr == NULL)
	{
		free(data->mlx_ptr);
		return ((void) MLX_ERROR);
	}
	Coordonnees_Personnages(data);
	Coordonnees_Ennemy(data);
	Calcul_Nombre_Collectible(data);
	// mlx_string_put( data->mlx_ptr, data->win_ptr, 0, 0, RED_PIXEL, "SALUT");
	mlx_hook(data->win_ptr, 12, 1L << 15, affichage_Sprites, data);
	mlx_hook(data->win_ptr, 2, 1l << 0, &handle_keypress, data);
	mlx_hook(data->win_ptr, 17, 0, Free_All_Fonctions, data);
	mlx_loop(data->mlx_ptr);
	free(data->mlx_ptr);
}
