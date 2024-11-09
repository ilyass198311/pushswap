/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 00:23:35 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/06/10 00:23:36 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	word;
	int		count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count = 0;
		}
		else if (s[i] != c && count == 0)
		{
			count = 1;
			word++;
		}
		i++;
	}
	return (word);
}

//strdup avec debut et fin pour len
static char	*inside(const char *str, int debut, int fin)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((fin - debut + 1) * sizeof(char));
	while (debut < fin)
	{
		word[i] = str[debut];
		i++;
		debut++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		debut;
	char	**tab;

	tab = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!s || !tab)
		return (NULL);
	i = 0;
	j = 0;
	debut = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && debut < 0)
			debut = i;
		else if ((s[i] == c || i == ft_strlen(s)) && debut >= 0)
		{
			tab[j++] = inside(s, debut, i);
			debut = -1;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

/*
#include "libft.h"

//compte combien y'a de mots
static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	word;
	int		count;

	i = 0;
	word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count = 0;
		}
		else if (s[i] != c && count == 0)
		{
			count = 1;
			word++;
		}
		i++;
	}
	return (word);
}

//comme un str dup mais avec un debut et une fin pour la taille du mots
static char	*inside(const char *s, int debut, int fin)
{
	size_t		i;
	char		*word;

	i = 0;
	word = malloc((fin - debut + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (debut < fin)
	{
		word[i] = s[debut];
		i++;
		debut++;
	}
	word[i] = '\0';
	return (word);
}

//decla var
static void	variable(size_t *i, size_t *j, int *debut)
{
	*i = 0;
	*j = 0;
	*debut = -1;
}

//separe la chaine en plusieurs tableaux de chaine de caracteres
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		debut;
	size_t	i;
	size_t	j;

	variable(&i, &j, &debut);
	tab = malloc ((count_word(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && debut < 0)
			debut = i;
		else if ((s[i] == c || i == ft_strlen(s)) && debut >= 0)
		{
			tab[j] = inside(s, debut, i);
			debut = -1;
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}
*/
/*
int main ()
{
 	int i;
 	char **res;	
	char str1[] = "Hello!";

	res = ft_split(str1, ' ');
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
*/
