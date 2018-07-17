/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:05:51 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/16 20:05:56 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lst_size(t_list *begin_list)
{
	int		i;
	t_list	*node;

	i = 0;
	node = begin_list;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
