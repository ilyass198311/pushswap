/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:22:57 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/10 00:23:00 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	saut_car(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		debut;
	int		fin;
	int		i;

	debut = 0;
	i = 0;
	fin = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[debut] && saut_car(set, s1[debut]))
		debut++;
	while (fin > debut && saut_car(set, s1[fin - 1]))
		fin--;
	s = malloc(((fin - debut) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (i < (fin - debut))
	{
		s[i] = s1[debut + i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
