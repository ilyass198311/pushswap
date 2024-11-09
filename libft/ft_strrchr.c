/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:11:07 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/02 23:14:42 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 La fonction strrchr recherche la dernière occurrence d'un caractère donné dans
 une chaîne de caractères et renvoie un pointeur vers cette position. Si le
 caractère n'est pas trouvé, la fonction renvoie NULL. 
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			res = ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		res = ((char *)&s[i]);
	}
	return (res);
}
/*
int main() 
{
    const char str[] = "Hello, world!";
    char ch = 'o';
    char *result;

    result = ft_strrchr(str, ch);
    if (result)
	    printf("Caractere '%c' trouve a la position: %ld\n", ch, result - str);
    else
	    printf("Caractere '%c' non trouver.\n", ch);
}
*/
