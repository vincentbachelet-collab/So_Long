/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deplacements_personnages.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:07:41 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/12 15:09:36 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Deplacement_Personnage_Droite(t_data *data)
{
	data->Nombre_Pas++;
	printf("Tu as fait %d pas\n", data->Nombre_Pas);
	if (data->map[data->player_x][data->player_y + 1] != '1')
	{	
		if (data->map[data->player_x][data->player_y + 1] == 'C')
		{
			Affichage_Deplacement_Image_Droite(data);
			data->map[data->player_x][data->player_y + 1] = '0';
			data->Collectibles--;
			printf("Il reste encore %d DragonBall a recuperer\n",
				data->Collectibles);
		}
		else if (data->map[data->player_x][data->player_y + 1] == 'B')
		{
			Animation_Defaite(data);
			printf("Tu dois devenir plus fort pour battre Buu");
			Free_All_Fonctions(data);
		}
		else if (data->map[data->player_x][data->player_y + 1] == 'E')
		{
			Collectibles_Found_Exit_Found(data);
			data->player_y--;
		}
		else
			Affichage_Deplacement_Image_Droite(data);
		data->map[data->player_x][data->player_y] = '0';
		data->map[data->player_x][data->player_y + 1] = 'P';
		data->player_y++;
		Deplacements_Ennemie1_Droite(data);
	}
}

void	Deplacement_Personnage_Gauche(t_data *data)
{
	data->Nombre_Pas++;
	printf("Tu as fait %d pas\n", data->Nombre_Pas);
	if (data->map[data->player_x][data->player_y - 1] != '1')
	{
		if (data->map[data->player_x][data->player_y - 1] == 'C')
		{
			Affichage_Deplacement_Image_Gauche(data);
			data->Collectibles--;
			data->map[data->player_x][data->player_y - 1] = '0';
			printf("Il reste encore %d DragonBall a recuperer\n",
				data->Collectibles);
		}
		else if (data->map[data->player_x][data->player_y - 1] == 'B')
		{
			Animation_Defaite(data);
			printf("Tu dois devenir plus fort pour battre Buu");
			Free_All_Fonctions(data);	
		}
		else if (data->map[data->player_x][data->player_y - 1] == 'E')
		{
			Collectibles_Found_Exit_Found(data);
			data->player_y++;
		}
		else
			Affichage_Deplacement_Image_Gauche(data);
		data->map[data->player_x][data->player_y] = '0';
		data->map[data->player_x][data->player_y - 1] = 'P';
		data->player_y--;
		Deplacements_Ennemie1_Gauche(data);
	}
}

void	Deplacement_Personnage_Up(t_data *data)
{
	data->Nombre_Pas++;
	printf("Tu as fait %d pas\n", data->Nombre_Pas);
	if (data->map[data->player_x - 1][data->player_y] != '1')
	{
		if (data->map[data->player_x - 1][data->player_y] == 'C')
		{
			Affichage_Deplacement_Image_Up(data);
			data->map[data->player_x - 1][data->player_y] = '0';
			data->Collectibles--;
			printf("Il reste encore %d DragonBall a recuperer\n",
				data->Collectibles);
		}
		else if (data->map[data->player_x - 1][data->player_y] == 'B')
		{
			Animation_Defaite(data);
			printf("Tu dois devenir plus fort pour battre Buu");
			Free_All_Fonctions(data);	
		}
		else if (data->map[data->player_x - 1][data->player_y] == 'E')
		{
			Collectibles_Found_Exit_Found(data);
			data->player_x++;
		}
		else
			Affichage_Deplacement_Image_Up(data);
		data->map[data->player_x][data->player_y] = '0';
		data->map[data->player_x - 1][data->player_y] = 'P';
		data->player_x--;
		Deplacements_Ennemie1_Up(data);
	}
}

void	Deplacement_Personnage_Down(t_data *data)
{
	data->Nombre_Pas++;
	printf("Tu as fait %d pas\n", data->Nombre_Pas);
	if (data->map[data->player_x + 1][data->player_y] != '1')
	{
		if (data->map[data->player_x + 1][data->player_y] == 'C')
		{
			Affichage_Deplacement_Image_Down(data);
			data->Collectibles--;
			data->map[data->player_x + 1][data->player_y] = '0';
			printf("Il reste encore %d DragonBall a recuperer\n",
				data->Collectibles);
		}
		else if (data->map[data->player_x + 1][data->player_y] == 'B')
		{
			Animation_Defaite(data);
			printf("Tu dois devenir plus fort pour battre Buu");
			Free_All_Fonctions(data);	
		}
		else if (data->map[data->player_x + 1][data->player_y] == 'E')
		{
			Collectibles_Found_Exit_Found(data);
			data->player_x--;
		}
		else
			Affichage_Deplacement_Image_Down(data);
		data->map[data->player_x][data->player_y] = '0';
		data->map[data->player_x + 1][data->player_y] = 'P';
		data->player_x++;
		Deplacements_Ennemie1_Down(data); 
	}
}

void	Collectibles_Found_Exit_Found(t_data *data)
{
	if (data->Collectibles == 0)
		Free_All_Fonctions(data);
	else
		printf("Tu dois chercher les autres DragonBall\n");
}
