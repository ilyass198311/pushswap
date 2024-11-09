/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 12:23:11 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/08/04 15:51:02 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(int n)
{
	int				nbr;
	unsigned int	i;

	nbr = n;
	i = 1;
	if (n < 0 && n != -2147483648)
	{
		nbr = -n;
		i++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	return (i);
}

static void	printrecursive(unsigned int nbr)
{
	if (nbr > 9)
		ft_print_unsigned(nbr / 10);
	if (nbr <= 9)
	{
		ft_putchar_fd(nbr + 48, 1);
		return ;
	}
	ft_putchar_fd((nbr % 10) + 48, 1);
}

int	ft_print_unsigned(unsigned int nbr)
{
	unsigned int	i;

	printrecursive(nbr);
	i = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
