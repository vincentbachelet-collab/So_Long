/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:21:03 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/10 17:28:53 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_list	*ft_lstnew(char *content)
{
	t_list	*Next;

	Next = malloc(sizeof(t_list));
	if (!Next)
		return (NULL);
	Next->line = content;
	Next->next = NULL;
	return (Next);
}
