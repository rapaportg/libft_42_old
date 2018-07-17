/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:09:17 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/12 16:15:11 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushback(t_list **begin_list, void *data, size_t size)
{
	t_list *node;
	t_list *new;

	if (begin_list == NULL)
		return ;
	if ((new = ft_create_elem(data, size)) == NULL)
		return ;
	if (*begin_list == NULL)
		*begin_list = new;
	else
	{
		node = *begin_list;
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
}
