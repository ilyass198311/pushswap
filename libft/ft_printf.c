/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouiddo <ibouiddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:49:44 by ibouiddo          #+#    #+#             */
/*   Updated: 2024/08/10 18:29:27 by ibouiddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	variable(va_list args, const char format)
{
	int	res;

	res = 0;
	if (format == 'c')
		res += ft_print_char(va_arg(args, int));
	else if (format == 's')
		res += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		res += ft_print_int(va_arg(args, int));
	else if (format == 'u')
		res += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'p')
		res += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'x' || format == 'X')
		res += ft_print_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		res += ft_print_pourcent();
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		res;
	va_list	args;

	va_start(args, str);
	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			res += variable(args, str[i + 1]);
			i++;
		}
		else
			res += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (res);
}
/*
int main() 
{
    // Test normal
    ft_printf("Bonjour, le monde!\n");
    printf("Bonjour, le monde!\n");

    // Test d et i (entier)
    ft_printf("L'entier est : %d\n", 42);

    // Test c (caracteres)
    ft_printf("Le caractère est : %c\n", 'a');

    // Test s (chaînes de caractères)
    ft_printf("La chaîne est : %s\n", "Ilyass");

    // Test u (unsigned)
    ft_printf("L'entier unisgned est : %u\n", 23);

    //Test p
    int entier = 1;
    void *pointeur = &entier;
    ft_printf("Le pinteur est : %p\n", pointeur);
    printf("Le pointeur est : %p\n", 0);

    // Test x et X
    ft_printf("L'entier en hexa x est : %x\n", 255);
    ft_printf("L'entier en hexa X est : %X\n", 255);

    // TEst %
    ft_printf("Pourcentage : %%\n");
    printf("Pourcentage : %%\n");

    // Test d'impression de plusieurs variables
    ft_printf("Entier : %d,, Caractère : %c", 42, 'a');

    return 0;
}
*/
