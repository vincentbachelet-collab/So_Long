/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:51:27 by vbachele          #+#    #+#             */
/*   Updated: 2021/08/10 16:57:16 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned long int	i;
	unsigned char		*p;

	i = 0;
	p = ptr;
	while (i < num)
	{
		p[i] = value;
		i++;
	}
	return ((void *)p);
}
