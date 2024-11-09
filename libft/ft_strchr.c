/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:11:12 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/02 03:52:08 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 La fonction strchr recherche la première occurrence d'un caractère donné dans
 une chaîne de caractères et renvoie un pointeur vers cette position. Si le
 caractère n'est pas trouvé, la fonction renvoie NULL. 
*/
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int main() 
{
    const char str[] = "Hello, world!";
    char ch = 'o';
    char *result;

    result = ft_strchr(str, ch);
    if (result)
	    printf("Caractere '%c' trouve a la position: %ld\n", ch, result - str);
    else
	    printf("Caractere '%c' non trouver.\n", ch);
}
*/
