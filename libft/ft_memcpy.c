/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:24:11 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/01 00:07:35 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Cette fonction permet de copier un bloc de mémoire spécifié par le
paramètre source, et dont la taille est spécifiée via le paramètre size,
 dans un nouvel emplacement désigné par le paramètre destination
*/
void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t		i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < size)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main ()
{
	char src[] = "";
	char dest1[0];
	char dest2[0];

	ft_memcpy(dest1, src, 3);
	printf("ft_memcpy resultat: %s\n", dest1);

	memcpy(dest2, src, 3);
	printf("Vrai memcpy resultat: %s\n", dest2);
}
*/
