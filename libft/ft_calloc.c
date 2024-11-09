/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:13:18 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/05/31 17:41:51 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction calloc en C alloue de la mémoire pour un tableau de num éléments de
size octets chacun et initialise tous les octets de la mémoire allouée à zéro.
*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < size * count)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
/*
int main() {
    size_t count = 5;
    size_t size = sizeof(int);

    // Utilisation de ft_calloc
    int *array1 = (int *)ft_calloc(count, size);
    if (!array1) {
        printf("ft_calloc failed to allocate memory.\n");
        return 1;
    }

    // Utilisation de calloc de la bibliothèque standard pour comparaison
    int *array2 = (int *)calloc(count, size);
    if (!array2) {
        printf("calloc failed to allocate memory.\n");
        free(array1);
        return 1;
    }

    // Vérification si les résultats sont identiques
    if (memcmp(array1, array2, count * size) == 0) {
        printf("Test passed: ft_calloc works correctly.\n");
    } else {
        printf("Test failed: ft_calloc does not work correctly.\n");
    }

    // Libérer la mémoire allouée
    free(array1);
    free(array2);

    return 0;
}
*/
