#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct Node
{
	int			data;
	struct Node	*next;
}				Node;

typedef Node	*stack;

void			ft_putstr(char *str);
int				ft_isdigit(int c);
int				ft_isspace(char c);
long			ft_atoi(const char *p);
void			ft_putnbr(int nb);

void			error_int(int ac, char **av);
void			duplicate(int ac, char **av);

void			push(stack *p, int x);
void			push_all(stack *p, int ac, char **av);
void			print_stack(stack p);
int				check_sorting(stack p);

void			sa(stack *p);
void			sb(stack *pb);
#endif