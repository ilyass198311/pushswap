/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:51:11 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/02 01:06:43 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction atoi (ASCII to Integer) convertit une chaîne de caractères en
un entier (int). 
*/
int	ft_atoi(const char *str)
{
	size_t	i;
	int		signe;
	int		nbr;

	i = 0;
	nbr = 0;
	signe = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * signe);
}
/*
int	main()
{
	printf("vrai atoi: %d \n", atoi("+-54"));
	printf("vrai atoi: %d \n", ft_atoi("+-54"));
}
*/
