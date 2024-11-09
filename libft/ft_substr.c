/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:25:45 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/10 00:23:07 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	new;
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		str = ft_calloc(1, sizeof(char));
		if (!str)
			return (NULL);
	}
	else
	{
		new = ft_strlen(s + start);
		if (!(new < len))
			new = len;
		str = (char *)malloc((new + 1) * sizeof(char));
		if (!str)
			return (NULL);
		str[new] = 0;
		while (new-- > 0)
			str[new] = s[start + new];
	}
	return (str);
}
