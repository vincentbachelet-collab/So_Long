/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:27:54 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/11 18:36:44 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc == 2)
	{
		data = malloc(sizeof(t_data));
		data->sprites = malloc(sizeof(t_sprites));
		if (!data)
			return (0);
		data->lst = malloc(sizeof(t_list));
		if (!data->lst)
			return (0);
		data->lst = NULL;
		Initialisation_Structure(data);
		if (check_If_Ber(argv))
			return (0);
		data->mlx_ptr = mlx_init();
		if (data->mlx_ptr == NULL)
			return (MLX_ERROR);
		Calcul_Tableau_Map(data, argv, &data->lst);
		if (check_Errors(data, &data->lst) == 1)
			return (0);
		Affichage_Game(data);
	}
	else
		printf("Erreur, mauvais nombre d'arguments\n");
}
