/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:12:34 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/01 00:17:14 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La fonction memcmp est utilisée pour comparer deux blocs de mémoire.  
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    int result;

    result = memcmp(str1, str2, strlen(str1));
    if (result == 0)
    {
        printf("str1 et str2 sont égaux.\n");
    }
    else 
    {
        printf("str1 et str2 sont différents.\n");
    }
}
*/
