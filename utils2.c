#include "push_swap.h" 

void	ra(stack *a)
{
	stack current;
	int first;

	first = current->data;
	current = *a;
	while (current && current->next)
	{
		current->data = current->next->data;
		current = current->next;
	}
	 current->data = first;
	 ft_putstr("ra\n");
}

void	rb(stack *b)
{
	stack current;
	int first;

	first = current->data;
	current = *b;
	while (current && current->next)
	{
		current->data = current->next->data;
		current = current->next;
	}
	 current->data = first;
	 ft_putstr("rb\n");
}

void rr(stack *a, stack *b)
{
	ra(a);
	rb(b);
	ft_putstr("rr\n");
}

void rra(stack *a)
{
    stack current;
	stack prev;

	current = *a;
	while(current && current->next)
	{
		prev = current;
		current->next;
	}
	push(a, current->data);
	free(current);
	prev->next = NULL;
} 

void rrb(stack *b)
{
    stack current;
	stack prev;

	current = *b;
	while(current && current->next)
	{
		prev = current;
		current->next;
	}
	push(b, current->data);
	free(current);
	prev->next = NULL;
}  

void rrr(stack *a,stack *b)
{
	rra(a);
	rrb(b);
	ft_putstr("rrr\n");
}


