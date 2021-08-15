/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Affichage_Sprites.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:45:36 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 16:00:45 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	affichage_Sprites(t_data *data)
{
	creation_Sprites(data);
	affichage_Sprites_Screen(data);
	return (0);
}

void	creation_Sprites(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites->Bomberman = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Bomberman.xpm", &img_width, &img_height);
	data->sprites->Bomb = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Bomb.xpm", &img_width, &img_height);
	data->sprites->Floor = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Floor.xpm", &img_width, &img_height);
	data->sprites->Exit = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Exit.xpm", &img_width, &img_height);
	data->sprites->Wall = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Wall.xpm", &img_width, &img_height);
	data->sprites->Songoku_Droite = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Songoku_Droite.xpm", &img_width, &img_height);
	data->sprites->Songoku_Up = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Songoku_Up.xpm", &img_width, &img_height);
	data->sprites->Ennemy = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Ennemy.xpm", &img_width, &img_height);
	creation_Sprites2(data, img_height, img_width);
}

void	affichage_Sprites_Screen(t_data *data)
{
	data->x = 0;
	while (data->map[data->x])
	{
		data->y = 0;
		while (data->map[data->x][data->y])
		{
			Affichage_Sprites_Screen2(data);
			data->y++;
		}
		data->x++;
	}
	Animation_Personnage_Down_Launch(data);
}

void	creation_Sprites2(t_data *data, int img_height, int img_width)
{
	data->sprites->Songoku_Down1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Down_1.xpm", &img_width, &img_height);
	data->sprites->Songoku_Down2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Down_2.xpm", &img_width, &img_height);
	data->sprites->Songoku_Down3 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Down_3.xpm", &img_width, &img_height);
	data->sprites->Songoku_Gauche2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Songoku_Gauche2.xpm", &img_width, &img_height);
	data->sprites->Songoku_Droite2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Songoku_Droite2.xpm", &img_width, &img_height);
	data->sprites->Songoku_Up2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Songoku_Up2.xpm", &img_width, &img_height);
	data->sprites->Ennemy2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Ennemy2.xpm", &img_width, &img_height);
	data->sprites->Defaite1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Defaite1.xpm", &img_width, &img_height);
	data->sprites->Defaite2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Defaite2.xpm", &img_width, &img_height);
	data->sprites->Defaite3 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Defaite3.xpm", &img_width, &img_height);
	data->sprites->Defaite4 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Defaite4.xpm", &img_width, &img_height);
	Creation_Sprites3(data, img_height, img_width);
}

void	Creation_Sprites3(t_data *data, int img_height, int img_width)
{
	data->sprites->Kamehameha1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha1.xpm", &img_width, &img_height);
	data->sprites->Kamehameha2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha2.xpm", &img_width, &img_height);
	data->sprites->Kamehameha3 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha3.xpm", &img_width, &img_height);
	data->sprites->Kamehameha4 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha4.xpm", &img_width, &img_height);
	data->sprites->Kamehameha5 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha5.xpm", &img_width, &img_height);
	data->sprites->Kamehameha6 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha6.xpm", &img_width, &img_height);
	data->sprites->Kamehameha7 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Kamehameha7.xpm", &img_width, &img_height);
	data->sprites->Rayon_Kamehameha1 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Rayon_Kamehameha1.xpm", &img_width, &img_height);
	data->sprites->Rayon_Kamehameha2 = mlx_xpm_file_to_image(data->mlx_ptr,
			"./Image_xpm/Rayon_Kamehameha2.xpm", &img_width, &img_height);	
}