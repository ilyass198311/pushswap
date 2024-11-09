/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 00:55:03 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/08/07 02:16:14 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenhexa(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n = n / 16;
	}
	return (i);
}

void	ft_put_hexa(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_put_hexa(n / 16, format);
		ft_put_hexa(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hexa(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		ft_put_hexa(n, format);
	return (ft_lenhexa(n));
}
