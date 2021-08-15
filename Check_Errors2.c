/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_Errors2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:26:57 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/11 15:16:50 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_charset(t_list *tmp, char c)
{
	int	i;

	i = 0;
	while (tmp->line[i++])
	{
		if (c == tmp->line[i])
			return (1);
	}
	return (0);
}

int	check_Other_Letters(t_data *data, t_list **lst)
{
	int		i;
	t_list	*tmp;

	tmp = *lst;
	while (tmp != 0)
	{
		i = 0;
		while (tmp->line[i])
		{
			if (Check_If_P_Superieur_Zero(tmp, data, i))
				return (1);
			if (tmp->line[i] == '1' || tmp->line[i] == '0'
				|| tmp->line[i] == 'P'
				|| tmp->line[i] == 'E' || tmp->line[i] == 'C' || tmp->line[i] == 'B')
				i++;
			else
			{
				printf ("ERROR");
				return (1);
			}	
		}
		tmp = tmp->next;
	}
	return (0);
}

int	check_If_Ber(char **argv)
{
	int	i;
	int	j;

	i = ft_strlen(argv[1]);
	j = i - 4;
	while (j - 4 <= i)
	{
		if (argv[1][j] == '.')
		{
			j++;
			if (argv[1][j] == 'b')
			{
				j++;
				if (argv[1][j] == 'e')
				{
					j++;
					if (argv[1][j] == 'r')
						return (0);
				}
			}
		}
		j++;
	}
	printf ("ERROR");
	return (1);
}

int	Check_If_P_Superieur_Zero(t_list *tmp, t_data *data, int i)
{
	if (tmp->line[i] == 'P')
	{
		data->s++;
		if (data->s > 1)
		{
			printf ("ERROR");
			return (1);
		}
	}
	return (0);
}

int	Check_1_Around_Rectangle2(t_list *tmp2, t_list *tmp, t_data *data, int i)
{
	while (tmp2 != 0)
	{
		while (i++ < data->height)
		{
			tmp = tmp2;
			while (data->s++ < data->height)
			{
				if (ft_strlen(tmp2->line) != ft_strlen(tmp->line))
				{
					printf("ERROR\n");
					return (1);
				}
				tmp = tmp->next;
			}
		}
		tmp2 = tmp2->next;
	}
	return (0);
}
