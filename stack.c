#include "push_swap.h"

int	isEmpty(t_stack p)
{
	return (p == NULL);
}

void	pop(t_stack *p)
{
		t_node *temp;

	if (isEmpty(*p))
		ft_putstr("error");
	else
	{
		temp = *p;
		*p = (*p)->next;
		free(temp);
	}
}

// int	top(t_stack p)
// {
// 	if (isEmpty(p))
// 		ft_putstr("error");
// 	else
// 		return (p->data);
// }

void	push(t_stack *p, int x)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	new->data = x;
	new->next = *p;
	*p = new;
}
void	ft_lstadd_back(t_stack *lst,t_node *new)
{
	t_stack p;

	p = *lst;
	if (new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (p->next)
				p = p->next;
			p->next = new;
		}
	}
}

void	push_all(t_stack *p, int ac, char **av)
{
	int	i;
	int	num;

	i = ac - 1;
	while (i >= 1)
	{
		num = atoi(av[i]);
		push(p, num);
		i--;
	}
}

// void	print_stack1(t_stack p)
// {
// 	if (p->next)
// 		print_stack(p->next);
// 	ft_putnbr(p->data);
// 	ft_putstr(" ");
// }

void print_stack(t_stack p)
{
	while(p)
	{
		ft_putnbr(p->data);
		ft_putstr(" ");
		p = p->next;
	}
}

int	check_sorting(t_stack p)
{
	t_stack temp;

	while (p)
	{
		temp = p->next;
		while (temp)
		{
			if (p->data > temp->data)
				return (0);
			temp = temp->next;
		}
		p = p->next;
	}
	return (1);
}