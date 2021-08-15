/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animation_Kamehameha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:02:19 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 23:50:05 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Animation_Kamehameha(t_data *data)
{
	int i;
	
	i = 0;
	while (i < 2000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha1, 60 * (data->player_y),
				60 * data->player_x);	
		i++;
	}
	while (i >= 2000 && i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha2, 60 * (data->player_y),
				60 * data->player_x);	
		i++;
	}
	i = Animation_Kamehameha2(data, i);
	i = Animation_Kamehameha3(data, i);
	Animation_Kamehameha4(data, i);
}

int	Animation_Kamehameha2(t_data *data, int i)
{
	while (i >= 4000 && i < 6000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha3, 60 * (data->player_y),
				60 * data->player_x);	
		i++;
	}
	while (i >= 6000 && i < 8000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha4, 60 * (data->player_y),
				60 * data->player_x);	
		i++;
	}
	while (i >= 8000 && i < 10000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha5, 60 * (data->player_y),
				60 * data->player_x);	
		i++;
	}
	return (i);
}

int	Animation_Kamehameha3(t_data *data, int i)
{
	while (i >= 10000 && i < 12000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha6, 60 * (data->player_y),
				60 * data->player_x);	
		i++;
	}
	while (i >= 12000 && i < 14000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Kamehameha7, 60 * (data->player_y),
				60 * data->player_x);
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Rayon_Kamehameha2, 60 * (data->player_y - 1),
				60 * data->player_x);	
		i++;
	}
	return (i);
}

void	Animation_Kamehameha4(t_data *data, int i)
{
	int j;
	int k;
	
	j = data->player_y - 1;
	k = data->player_y - 2;
	while (k > - 1)
	{	
		i = 14000;
		while (i >= 14000 && i < 16000)
		{
			mlx_put_image_to_window(data->mlx_ptr,
	 			data->win_ptr, data->sprites->Kamehameha7, 60 * (data->player_y),
				60 * data->player_x);
			mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Rayon_Kamehameha1, 60 * (j),
				60 * data->player_x);
			mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Rayon_Kamehameha2, 60 * (k),
				60 * data->player_x);		
			i++;
		}
		k--;
		j--;
	}	
}
