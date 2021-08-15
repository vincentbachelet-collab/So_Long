/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Affichage_Ecran3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:55:18 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/13 11:15:45 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Affichage_Sprites_Screen2(t_data *data)
{
	if (data->map[data->x][data->y] == '1')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Wall, 60 * data->y, 60 * data->x);
	else if (data->map[data->x][data->y] == '0')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Floor, 60 * data->y, 60 * data->x);
	else if (data->map[data->x][data->y] == 'C')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Bomb, 60 * data->y, 60 * data->x);
	else if	(data->map[data->x][data->y] == 'B')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Ennemy, 60 * data->y + 1, 60 * data->x);
	else if (data->map[data->x][data->y] == 'E')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Exit, 60 * data->y, 60 * data->x);
	else if (data->map[data->player_x][data->player_y] == 'P')
		mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Songoku_Down3, 60 * data->player_y,
			60 * data->player_x);
}
