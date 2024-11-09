/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 00:09:22 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/02 04:05:55 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	i;
	size_t	j;

	len_dest = ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && (i + j + 1) < (dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[j + i] = '\0';
	if (dstsize < len_dest)
	{
		return (ft_strlen(src) + dstsize);
	}
	else
	{
		return (ft_strlen(src) + len_dest);
	}
}
