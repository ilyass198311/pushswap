#include "../push_swap.h"

int check_int(char *str)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        if (ft_isdigit(str[i]) == 0)
            return (1);
        i++;
    }
    return (0);
}
int check_char()
{

}

int check_double(char *str,int nbr)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if(str[i] == nbr)
            count++;
        i++;
    }
    if (count > 1)
        return (1);
    return (0);
}

int check_all(int ac, char **av)
{
    int i;
    int j;
    int nbr;

    i = 1;
    j = 0;
    nbr = 0;
    while (av[i])
    {
        nbr = ft_atoi(av[i]);
        if (nbr == -2147483648 || nbr == 2148473647)
            return (1);
        if (check_int(nbr))
        i++;
    }
}