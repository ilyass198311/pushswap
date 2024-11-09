/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:23:54 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/10 00:23:55 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction itoa (integer to ASCII) est une fonction qui convertit un entier
en une chaîne de caractères (string). 
*/

static int	len_entier(long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i++;
	if (nbr < 0)
	{
		i++;
		nbr = nbr * (-1);
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	size_t	signe;
	char	*res;

	nbr = n;
	len = len_entier(nbr);
	signe = 0;
	res = malloc ((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		res[0] = '-';
		signe = 1;
	}
	res[len] = '\0';
	while (len > signe)
	{
		res[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (res);
}
/*
int     main()
{
        long int a;

        a = -+124378;
        printf("%d\n", len_entier(a));
	printf("%s\n", ft_itoa(a));
}
*/
