/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:03:58 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/05/31 19:09:33 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction memset est utilisée pour remplir un bloc de mémoire avec 
une valeur donnée.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
/*
int main() 
{
    char str[50] = "Hello, World!";

    printf("Avant memset : %s\n", str);

    memset(str, 'A', 5);

    printf("Après memset : %s\n", str);

    return 0;
}
*/
