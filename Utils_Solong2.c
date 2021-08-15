/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils_Solong2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:27:57 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/10 17:11:23 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	Calcul_Nombre_Collectible(t_data *data)
{
	t_list	*tmp;
	int		i;

	tmp = data->lst;
	data->Collectibles = 0;
	while (tmp)
	{
		i = 0;
		while (tmp->line[i])
		{
			if (tmp->line[i] == 'C')
				data->Collectibles++;
			i++;
		}
		tmp = tmp->next;
	}
}

int	Free_All_Fonctions(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	if (data->sprites)
		free(data->sprites);
	if (data->lst)
		free(data->lst);
	Free_Double_Tableau(data);
	free(data->mlx_ptr);
	if (data)
		free(data);
	exit(1);
}

void	Free_Double_Tableau(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i])
	{
		free(data->map[i]);
		i++;
	}
	free(data->map);
}
