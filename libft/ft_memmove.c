/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:38:02 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/02 01:06:29 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction memmove() copie n octets depuis la zone mémoire src vers la zone
mémoire dest. Les deux zones peuvent se chevaucher : la copie se passe comme
si les octets de src étaient d'abord copiés dans une zone temporaire qui ne
chevauche ni src ni dest, et les octets sont ensuite copiés de la zone
temporaire vers dest.   
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while ((size_t)i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
/*
int main() 
{
    char dest1[0] = "";
    const char src1[] = "Test memmove function";

    ft_memmove(dest1 + 9, src1, 17);
    printf("ft_memmove result: %s\n", dest1);

    memmove(dest1 + 9, src1, 17);
    printf("Standard memmove result: %s\n", dest1);

    return 0;
}
*/
