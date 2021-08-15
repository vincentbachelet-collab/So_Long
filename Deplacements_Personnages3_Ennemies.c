/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deplacements_Personnages3_Ennemies.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:42:14 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 15:04:30 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Deplacements_Ennemie1_Down(t_data *data)
{
	if (data->map[data->Ennemy_x - 1][data->Ennemy_y] == '1' || data->map[data->Ennemy_x - 1][data->Ennemy_y] == 'C' || data->map[data->Ennemy_x - 1][data->Ennemy_y] == 'E' || data->map[data->Ennemy_x - 1][data->Ennemy_y] == 'P')
	{
		if (data->map[data->Ennemy_x + 1][data->Ennemy_y] != '1' && data->map[data->Ennemy_x + 1][data->Ennemy_y] != 'C' && data->map[data->Ennemy_x + 1][data->Ennemy_y] != 'E' && data->map[data->Ennemy_x + 1][data->Ennemy_y] != 'P')
		{
			Animation_Ennemy_Down(data);
			data->map[data->Ennemy_x][data->Ennemy_y]= '0';
			data->map[data->Ennemy_x + 1][data->Ennemy_y] = 'B';
			data->Ennemy_x++;
		}
	}
	else if (data->map[data->Ennemy_x - 1][data->Ennemy_y] != '1' && data->map[data->Ennemy_x - 1][data->Ennemy_y] != 'C' && data->map[data->Ennemy_x - 1][data->Ennemy_y] != 'E' && data->map[data->Ennemy_x - 1][data->Ennemy_y] != 'P')
	{
		Animation_Ennemy_Up(data);
		data->map[data->Ennemy_x][data->Ennemy_y]= '0';
		data->map[data->Ennemy_x - 1][data->Ennemy_y] = 'B';
		data->Ennemy_x--;
	}
}

void	Deplacements_Ennemie1_Gauche(t_data *data)
{
	if (data->map[data->Ennemy_x][data->Ennemy_y - 1] == '1' || data->map[data->Ennemy_x][data->Ennemy_y - 1 ] == 'C' || data->map[data->Ennemy_x][data->Ennemy_y - 1] == 'E' || data->map[data->Ennemy_x][data->Ennemy_y - 1] == 'P' )
	{
		if (data->map[data->Ennemy_x][data->Ennemy_y + 1] != '1' && data->map[data->Ennemy_x][data->Ennemy_y + 1] != 'C' && data->map[data->Ennemy_x][data->Ennemy_y + 1] != 'E' && data->map[data->Ennemy_x][data->Ennemy_y + 1] != 'P')
		{
			Animation_Ennemy_Droite(data);
			data->map[data->Ennemy_x][data->Ennemy_y]= '0';
			data->map[data->Ennemy_x][data->Ennemy_y + 1] = 'B';
			data->Ennemy_y++;
		}
	}
	else if (data->map[data->Ennemy_x][data->Ennemy_y - 1] != '1' && data->map[data->Ennemy_x][data->Ennemy_y - 1] != 'C' && data->map[data->Ennemy_x][data->Ennemy_y - 1] != 'E' && data->map[data->Ennemy_x][data->Ennemy_y - 1] != 'P')
	{
		Animation_Ennemy_Gauche(data);	
		data->map[data->Ennemy_x][data->Ennemy_y]= '0';
		data->map[data->Ennemy_x][data->Ennemy_y - 1] = 'B';
		data->Ennemy_y--;
	}
}

void	Deplacements_Ennemie1_Up(t_data *data)
{
	if (data->map[data->Ennemy_x - 1][data->Ennemy_y] == '1' || data->map[data->Ennemy_x - 1][data->Ennemy_y] == 'C' || data->map[data->Ennemy_x - 1][data->Ennemy_y] == 'E'|| data->map[data->Ennemy_x - 1][data->Ennemy_y] == 'P')
	{
		if (data->map[data->Ennemy_x + 1][data->Ennemy_y] != '1' && data->map[data->Ennemy_x + 1][data->Ennemy_y] != 'C' && data->map[data->Ennemy_x + 1][data->Ennemy_y] != 'E' && data->map[data->Ennemy_x + 1][data->Ennemy_y] != 'P')
		{
			Animation_Ennemy_Down(data);
			data->map[data->Ennemy_x][data->Ennemy_y]= '0';
			data->map[data->Ennemy_x + 1][data->Ennemy_y] = 'B';
			data->Ennemy_x++;
		}
	}
	else if (data->map[data->Ennemy_x - 1][data->Ennemy_y] != '1' && data->map[data->Ennemy_x - 1][data->Ennemy_y] != 'C' && data->map[data->Ennemy_x - 1][data->Ennemy_y] != 'E' && data->map[data->Ennemy_x - 1][data->Ennemy_y] != 'P')
	{
		Animation_Ennemy_Up(data);
		data->map[data->Ennemy_x][data->Ennemy_y]= '0';
		data->map[data->Ennemy_x - 1][data->Ennemy_y] = 'B';
		data->Ennemy_x--;
	}
}

void	Deplacements_Ennemie1_Droite(t_data *data)
{
	if (data->map[data->Ennemy_x][data->Ennemy_y + 1] == '1' || data->map[data->Ennemy_x][data->Ennemy_y + 1 ] == 'C' || data->map[data->Ennemy_x][data->Ennemy_y + 1] == 'E' || data->map[data->Ennemy_x][data->Ennemy_y + 1] == 'P')
	{
		if (data->map[data->Ennemy_x][data->Ennemy_y - 1] != '1' && data->map[data->Ennemy_x][data->Ennemy_y - 1] != 'C' && data->map[data->Ennemy_x][data->Ennemy_y - 1] != 'E' && data->map[data->Ennemy_x][data->Ennemy_y - 1] != 'P')
		{
			Animation_Ennemy_Gauche(data);
			data->map[data->Ennemy_x][data->Ennemy_y]= '0';
			data->map[data->Ennemy_x][data->Ennemy_y - 1] = 'B';
			data->Ennemy_y--;
		}
	}
	else if (data->map[data->Ennemy_x][data->Ennemy_y + 1] != '1' && data->map[data->Ennemy_x][data->Ennemy_y + 1] != 'C' && data->map[data->Ennemy_x][data->Ennemy_y + 1] != 'E' && data->map[data->Ennemy_x][data->Ennemy_y + 1] != 'P')
	{
		Animation_Ennemy_Droite(data);
		data->map[data->Ennemy_x][data->Ennemy_y]= '0';
		data->map[data->Ennemy_x][data->Ennemy_y + 1] = 'B';
		data->Ennemy_y++;
	}
}
