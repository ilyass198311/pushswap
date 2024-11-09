/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:10:47 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/08/10 18:25:02 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_str(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
		i++;
	ft_putstr_fd(str, 1);
	return (i);
}

int	ft_print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_pourcent(void)
{
	write(1, "%", 1);
	return (1);
}
