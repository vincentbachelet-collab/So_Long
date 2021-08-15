/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_Errors3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:20:20 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/10 16:55:01 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	Check_1st_Line(t_list *tmp, int i)
{
	while (tmp->line[i++])
	{
		if (tmp->line[i - 1] != '1')
		{
			printf ("ERROR\n");
			return (1);
		}
	}
	return (0);
}

int	Check_Last_Line(t_list *tmp)
{
	int	i;

	i = 0;
	while (tmp->line[i++])
	{
		if (tmp->line[i - 1] != '1')
		{
			printf ("ERROR\n");
			return (1);
		}
	}
	return (0);
}

int	Check_If_Other_Letters(int C, int E, int P, int Zero)
{
	if (C != 1 || E != 1 || P != 1 || Zero != 1)
	{
		printf ("ERROR\n");
		return (1);
	}
	return (0);
}
