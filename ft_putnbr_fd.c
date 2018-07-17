/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:51:41 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/17 16:13:59 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	int power;

	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		if (nbr == -2147483648)
		{
			ft_putchar_fd('2', fd);
			nbr %= 1000000000;
		}
		nbr = -nbr;
	}
	power = 1000000000;
	while (power > nbr && power > 1)
		power /= 10;
	while (power > 1)
	{
		ft_putchar_fd('0' + (char)(nbr / power), fd);
		nbr = nbr % power;
		power /= 10;
	}
	ft_putchar_fd('0' + (char)(nbr / power), fd);
}
