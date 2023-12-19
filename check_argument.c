#include "push_swap.h"

// void    check_arguments(int ac, char **av)
// {
//     int i;
//     int j;
//     int num;

//     i = 1;
//     while(i < ac)
//     {
//         j = 0;
//         num = ft_atoi(av[i]);
//         while(av[i][j])
//         {
//             if(!ft_isdigit(av[i][j]))
//             {
//                 ft_putstr("error1");
//                 exit(1);
//             }
//             j++;
//         }
//         i++;
//     }
// }
void	error_int(int ac, char **av)
{
	int		i;
	long	num;

	i = 1;
	while (i < ac)
	{
		num = ft_atoi(av[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			ft_putstr("error");
			exit(1);
		}
		i++;
	}
}

void	duplicate(int ac, char **av)
{
	int i;
	int j;
	int num1;
	int num2;

	i = 1;
	while (i < ac)
	{
		num1 = ft_atoi(av[i]);
		j = i + 1;
		while (j < ac)
		{
			num2 = ft_atoi(av[j]);
			if (num2 == num1)
			{
				ft_putstr("error");
				exit(1);
			}
			j++;
		}
		i++;
	}
}