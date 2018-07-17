/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:15:33 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/12 16:19:39 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushfront(t_list **begin_list, void *data, size_t size)
{
	t_list	*node;

	if (begin_list && (node = ft_create_elem(data, size)))
	{
		node->next = *begin_list;
		*begin_list = node;
	}
}
