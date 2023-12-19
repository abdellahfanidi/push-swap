#include "push_swap.h"

// int	isEmpty(stack p)
// {
// 	return (p == NULL);
// }

void	pop(stack *p)
{
		Node *temp;

	if (isEmpty(*p))
		ft_putstr("error");
	else
	{
		temp = *p;
		*p = (*p)->next;
		free(temp);
	}
}

// int	top(stack p)
// {
// 	if (isEmpty(p))
// 		ft_putstr("error");
// 	else
// 		return (p->data);
// }

void	push(stack *p, int x)
{
	Node	*new;

	new = (Node *)malloc(sizeof(Node));
	new->data = x;
	new->next = *p;
	*p = new;
}

void	push_all(stack *p, int ac, char **av)
{
	int	i;
	int	num;

	i = 1;
	while (i < ac)
	{
		num = atoi(av[i]);
		push(p, num);
		i++;
	}
}

void	print_stack(stack p)
{
	if (p->next)
		print_stack(p->next);
	ft_putnbr(p->data);
	ft_putstr(" ");
}

int	check_sorting(stack p)
{
	stack temp;

	while (p)
	{
		temp = p->next;
		while (temp)
		{
			if (p->data < temp->data)
				return (0);
			temp = temp->next;
		}
		p = p->next;
	}
	return (1);
}