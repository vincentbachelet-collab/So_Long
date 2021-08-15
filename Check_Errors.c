/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Check_Errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:06:01 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/10 16:53:29 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_Errors(t_data *data, t_list **lst)
{
	if (check_1_Around_Rectangle(data, lst) || check_If_1_Everywhere(data, lst)
		|| Check_All_Letters(data, lst) || check_Other_Letters(data, lst))
		return (1);
	return (0);
}

int	check_1_Around_Rectangle(t_data *data, t_list **lst)
{
	int		i;
	t_list	*tmp;
	t_list	*tmp2;

	i = 0;
	data->s = 0;
	tmp = *lst;
	tmp2 = *lst;
	if (Check_1_Around_Rectangle2(tmp2, tmp, data, i))
		return (1);
	data->s = 0;
	return (0);
}

int	check_If_1_Everywhere(t_data *data, t_list **lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = *lst;
	if (Check_1st_Line(tmp, i))
		return (1);
	tmp = tmp->next;
	while (++i < data->height - 1)
	{
		if (tmp->line[0] != '1' || tmp->line[data->width - 1] != '1')
		{
			printf ("ERROR\n");
			return (1);
		}
		tmp = tmp->next;
	}
	if (Check_Last_Line(tmp))
		return (1);
	return (0);
}

int	Check_All_Letters(t_data *data, t_list **lst)
{
	int		j;
	t_list	*tmp;

	j = 0;
	tmp = *lst;
	tmp = tmp->next;
	if (Check_All_Letters2(data, tmp, j))
		return (1);
	return (0);
}

int	Check_All_Letters2(t_data *data, t_list *tmp, int j)
{
	int	C;
	int	E;
	int	P;
	int	Zero;

	while (++j < data->height - 1)
	{
		while (tmp != 0)
		{
			if (is_charset(tmp, 'C'))
				C = 1;
			if (is_charset(tmp, 'E'))
				E = 1;
			if (is_charset(tmp, 'P'))
				P = 1;
			if (is_charset(tmp, '0'))
				Zero = 1;
			tmp = tmp->next;
		}
	}
	if (Check_If_Other_Letters(C, E, P, Zero))
		return (1);
	return (0);
}
