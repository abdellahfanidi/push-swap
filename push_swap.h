#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_node
{
	int				data;
	int				position;
	struct t_node	*next;
}					t_node;

typedef t_node		*t_stack;

void				ft_putstr(char *str);
int					ft_isdigit(int c);
int					ft_isspace(char c);
long				ft_atoi(const char *p);
void				ft_putnbr(int nb);

void				error_int(int ac, char **av);
void				duplicate(int ac, char **av);

void				push(t_stack *p, int x, int pos);
void				pop(t_stack *p);
int					ft_lstsize(t_stack lst);
void				ft_lstadd_back(t_stack *lst, t_node *new);
void				push_all(t_stack *p, int ac, char **av);
void				print_stack(t_stack p);
int					check_sorting(t_stack p);
void				solve_iii(t_stack *a);
void				solve_n(t_stack *a, t_stack *b);
int					get_target_top(t_stack *p, int pos);
int get_target_top1(t_stack p, int pos);

void				sa(t_stack *p);
void				sb(t_stack *pb);
void				ss(t_stack *a, t_stack *b);
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);
#endif