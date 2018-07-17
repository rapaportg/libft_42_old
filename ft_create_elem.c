/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:04:10 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/16 01:56:42 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem(void *data, size_t size)
{
	t_list *node;

	if ((node = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	node->content = data;
	node->content_size = size;
	node->next = NULL;
	return (node);
}
