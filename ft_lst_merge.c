/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_merge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:39:33 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/12 17:04:50 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_merge(t_list **a, t_list *b)
{
	t_list	*node;

	if (a == NULL)
		return ;
	if (*a == NULL)
		*a = b;
	else
	{
		node = *a;
		while (node->next)
			node = node->next;
		node->next = b;
	}
}
