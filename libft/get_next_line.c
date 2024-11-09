/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 08:40:03 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/08/26 22:07:44 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy_et_stocker(char *stock, char *buffer)
{
	char	*res;

	res = 0;
	if (!stock && buffer)
	{
		res = ft_strdup(buffer);
		if (!res)
			return (NULL);
		return (res);
	}
	res = ft_strjoin(stock, buffer);
	ft_free_stock(&stock, 0);
	return (res);
}

static int	ft_newline(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_extrait_line(char *stock)
{
	char	*line;
	size_t	i;
	size_t	j;

	i = 0;
	if (!stock)
		return (NULL);
	while (stock[i] && stock[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		line[j] = stock[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

static char	*ft_recreate_line(char *stock)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!stock)
		return (NULL);
	while (stock[i] != '\n')
		i++;
	if (stock[i + 1] == '\0')
		return (ft_free_stock(&stock, 0));
	res = ft_substr(stock, i + 1, ft_strlen(stock));
	if (!res)
	{
		ft_free_stock(&stock, 0);
		return (NULL);
	}
	ft_free_stock(&stock, 0);
	return (res);
}

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1];
	long			buf_read;
	static char		*stock = NULL;
	char			*line;

	line = NULL;
	buf_read = BUFFER_SIZE;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (ft_free_stock(&stock, 0));
	while (buf_read > 0)
	{
		buf_read = read(fd, buffer, BUFFER_SIZE);
		if ((buf_read <= 0 && !stock) || (buf_read == -1))
			return (ft_free_stock(&stock, 0));
		buffer[buf_read] = '\0';
		stock = ft_copy_et_stocker(stock, buffer);
		if (ft_newline(stock))
		{
			line = ft_extrait_line(stock);
			if (!line)
				return (ft_free_stock(&stock, 0));
			return (stock = ft_recreate_line(stock), line);
		}
	}
	return (ft_free_stock(&stock, 1));
}
/*
int main(int argc, char **argv)
{
    int     fd;
    char    *line;

    if (argc != 2)
    {
        printf("erreur d'argument");
        return (1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        printf("Erreur a l'ouverture du fichier");
        return (1);
    }
    line = get_next_line(fd);
    print ("%s", line);
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    if (close(fd) < 0)
    {
        printf("Erreur ferme le fichier");
        return (1);
    }

    return (0);
}
*/
