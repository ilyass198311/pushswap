/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:40:41 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/08/10 18:17:24 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_lenptr(uintptr_t n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_putptr(ptr);
		len += ft_lenptr(ptr);
	}
	return (len);
}
