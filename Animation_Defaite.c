/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animation_Defaite.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:54:03 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 15:21:30 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Animation_Defaite(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->player_y * 60, data->player_x * 60);
	while (i < 20000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Defaite1, 60 * (data->player_y - 1),
				60 * data->player_x);	
		i++;
	}
	while (i >= 20000 && i < 30000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Defaite2, 60 * (data->player_y - 1),
				60 * data->player_x);
		i++;
	}
	Animation_Defaite2(data, i);
}

void	Animation_Defaite2(t_data *data, int i)
{
	while (i >= 30000 && i < 40000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Defaite3, 60 * (data->player_y - 1),
				60 * data->player_x);
		i++;
	}
	while (i >= 40000 && i < 50000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Defaite4, 60 * (data->player_y - 1),
				60 * data->player_x);
		i++;
	}	
}