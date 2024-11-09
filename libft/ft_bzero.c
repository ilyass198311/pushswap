/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:16:54 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/02 01:06:52 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction bzero initialise les octets d'une zone mémoire à zéro.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
/*
int	main ()
{
	char	str[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	int	i;
	
	i = 0;
	printf("Avant ft_bezero\n");
	while (i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	ft_bzero(str, 10);
	printf("Apres ft_bezro\n");
	i = 0;
	while (i < 10)
	{
		printf("%d", str[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
