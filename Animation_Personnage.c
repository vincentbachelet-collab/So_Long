/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animation_Personnage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:33:51 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 23:51:33 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Animation_Personnage_Gauche(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->player_y * 60, data->player_x * 60);
	while (i < 2000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Gauche2, 60 * (data->player_y - 1),
				60 * data->player_x);	
		i++;
	}
	while (i >= 2000 && i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Bomberman, 60 * (data->player_y - 1),
				60 * data->player_x);	
		i++;
	}
}

void	Animation_Personnage_Down_Launch(t_data *data)
{
	int i;

	i = 0;
	mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Songoku_Down1, 60 * data->player_y,
			60 * data->player_x);
	i = 0;
	while (i < 2000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Down1, 60 * data->player_y,
				60 * data->player_x);	
		i++;
	}
	while (i >= 2000 && i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Down3, 60 * data->player_y,
				60 * data->player_x);	
		i++;
	}
}

void	Animation_Personnage_Down(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->player_y * 60, data->player_x * 60);
	while (i < 2000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Down1, 60 * data->player_y,
				60 * (data->player_x + 1));	
		i++;
	}
	while (i >= 2000 && i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Down3, 60 * data->player_y,
				60 * (data->player_x + 1));	
		i++;
	}	
}

void	Animation_Personnage_Up(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->player_y * 60, data->player_x * 60);
	while (i < 2000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Up2, 60 * data->player_y,
				60 * (data->player_x - 1));	
		i++;
	}
	while (i >= 2000 && i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Up, 60 * data->player_y,
				60 * (data->player_x - 1));	
		i++;
	}		
}

void	Animation_Personnage_Droite(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->player_y * 60, data->player_x * 60);
	while (i < 2000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Droite2, 60 * (data->player_y + 1),
				60 * data->player_x);	
		i++;
	}
	while (i >= 2000 && i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Songoku_Droite, 60 * (data->player_y + 1),
				60 * data->player_x);	
		i++;
	}		
}
