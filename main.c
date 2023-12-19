#include "push_swap.h"

int	main(int ac, char **av)
{
	stack p;
	int check;

	if (ac > 1)
	{
		error_int(ac, av);
		duplicate(ac, av);
	
	push_all(&p, ac, av);
	print_stack(p);
	check = check_sorting(p);
	if (check)
	{
        ft_putstr("ok\n");
        return (0);
    }
	else
	{
        ft_putstr("ko\n");
        sa(&p);
        print_stack(p);
    }
    }
}