/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animation_Ennemy2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:54:21 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 12:19:39 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Animation_Ennemy_Gauche(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->Ennemy_y * 60, data->Ennemy_x * 60);
	while (i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy, 60 * (data->Ennemy_y - 1),
				60 * data->Ennemy_x);	
		i++;
	}
	while (i >= 4000 && i < 8000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy2, 60 * (data->Ennemy_y - 1),
				60 * data->Ennemy_x);	
		i++;
	}
}

void	Animation_Personnage_Ennemy_Launch(t_data *data)
{
	int i;

	i = 0;
	mlx_put_image_to_window(data->mlx_ptr,
			data->win_ptr, data->sprites->Ennemy, 60 * data->Ennemy_y,
			60 * data->Ennemy_x);
	i = 0;
	while (i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy, 60 * data->Ennemy_y,
				60 * data->Ennemy_x);	
		i++;
	}
	while (i >= 4000 && i < 8000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy2, 60 * data->Ennemy_y,
				60 * data->Ennemy_x);	
		i++;
	}
}

void	Animation_Ennemy_Down(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->Ennemy_y * 60, data->Ennemy_x * 60);
	while (i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy, 60 * data->Ennemy_y,
				60 * (data->Ennemy_x + 1));	
		i++;
	}
	while (i >= 4000 && i < 8000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy2, 60 * data->Ennemy_y,
				60 * (data->Ennemy_x + 1));	
		i++;
	}	
}

void	Animation_Ennemy_Up(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->Ennemy_y * 60, data->Ennemy_x * 60);
	while (i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy, 60 * data->Ennemy_y,
				60 * (data->Ennemy_x - 1));	
		i++;
	}
	while (i >= 4000 && i < 8000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy2, 60 * data->Ennemy_y,
				60 * (data->Ennemy_x - 1));	
		i++;
	}		
}

void	Animation_Ennemy_Droite(t_data *data)
{
	int i;
	
	i = 0;
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr,
		data->sprites->Floor,
		data->Ennemy_y * 60, data->Ennemy_x * 60);
	while (i < 4000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy, 60 * (data->Ennemy_y + 1),
				60 * data->Ennemy_x);	
		i++;
	}
	while (i >= 4000 && i < 8000)
	{
		mlx_put_image_to_window(data->mlx_ptr,
				data->win_ptr, data->sprites->Ennemy2, 60 * (data->Ennemy_y + 1),
				60 * data->Ennemy_x);	
		i++;
	}		
}