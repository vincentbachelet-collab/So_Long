/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils_Solong1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 10:56:20 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/11 16:17:41 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_next_line(int fd, char **line)
{
	int		ret;
	int		i;
	char	buf;

	if (!line)
		return (-1);
	*line = malloc(1234567);
	**line = 0;
	i = 0;
	buf = 0;
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, &buf, 1);
		if (buf == '\n')
			break ;
		(*line)[i] = buf;
		buf = 0;
		i++;
	}
	(*line)[i] = 0;
	if (ret == -1)
		**line = 0;
	return (ret);
}

void	Initialisation_Structure(t_data *data)
{
	data->width = 0;
	data->height = 0;
	data->x = 0;
	data->y = 0;
	data->player_x = 0;
	data->player_y = 0;
	data->Collectibles = 0;
	data->s = 0;
	data->Nombre_Pas = 0;
	data->Ennemy_x = 0;
	data->Ennemy_y = 0;
}

int	Calcul_Tableau_Map(t_data *data, char **argv, t_list **lst)
{
	char			*line;
	int				fd;
	int				flag;
	t_list			*new;
	t_list			*tmp;

	fd = open(argv[1], O_RDONLY);
	flag = 1;
	while (flag)
	{
		flag = get_next_line(fd, &line);
		new = ft_lstnew(line);
		ft_lstadd_back(lst, new);
		data->height++;
	}
	tmp = *lst;
	data->width = ft_strlen(tmp->line);
	Calcul_Tableau_2_Dimensions(data, tmp);
	return (0);
}

void	Calcul_Tableau_2_Dimensions(t_data *data, t_list *tmp)
{
	int	i;

	data->map = (char **)ft_calloc(data->height + 1, sizeof(char *));
	data->x = 0;
	while (tmp != NULL)
	{
		i = 0;
		data->y = 0;
		data->map[data->x] = (char *)malloc(sizeof(char) * (data->width + 1));
		while (tmp->line[i])
		{
			data->map[data->x][data->y] = tmp->line[i];
			i++;
			data->y++;
		}
		data->map[data->x][data->y] = 0;
		data->x++;
		tmp = tmp->next;
	}
	data->map[data->x] = 0;
	Calcul_Width_Height(data);
	Calcul_Nombre_Collectible(data);
}

void	Coordonnees_Personnages(t_data *data)
{
	data->x = 0;
	while (data->map[data->x])
	{
		data->y = 0;
		while (data->map[data->x][data->y])
		{
			if (data->map[data->x][data->y] == 'P')
			{
				 data->player_x = data->x;
				 data->player_y = data->y;
			}
			data->y++;
		}
		data->x++;
	}
}

void	Coordonnees_Ennemy(t_data *data)
{
	
	data->x = 0;
	while (data->map[data->x])
	{
		data->y = 0;
		while (data->map[data->x][data->y])
		{
			if (data->map[data->x][data->y] == 'B')
			{
				 data->Ennemy_x = data->x;
				 data->Ennemy_y = data->y;
			}
			data->y++;
		}
		data->x++;
	}
}