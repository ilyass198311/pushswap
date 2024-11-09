/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:12:18 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/01 03:51:00 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction memchr est utilisée pour rechercher la première occurrence d'un
caractère donné dans un bloc de mémoire. 
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main() 
{
    char str[] = "Hello, World!";
    char ch = 'W';
    char *ptr;

    ptr = memchr(str, ch, strlen(str));

    if (ptr != NULL) {
 printf("Le caractère '%c' est trouvé à la position %ld.\n", ch, ptr - str);
    } else {
        printf("Le caractère '%c' n'est pas trouvé.\n", ch);
    }

    return 0;
}
*/
