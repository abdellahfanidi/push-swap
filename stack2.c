#include "push_swap.h"

int	ft_lstsize(t_stack lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

static int help_top(int nb1, int nb2,t_stack *p)
{
    if (nb1 == 1)
        return (1);
    if (nb1 > (ft_lstsize(*p) / 2))
        while(nb2 > 0)
        {
            rra(p);
            nb2--;
        }
    else
        while(nb1 != 1)
        {
            ra(p);
            nb1--;
        }
    return (1);
}

int get_target_top(t_stack *p, int pos)
{
    t_stack cur;
    int nb1;
    int nb2;
    int i;
    
    cur = *p;
    nb1 = 0;
    nb2 = 1;
    while(cur)
    {
        ++nb1;
        if (cur->position == pos)
        {
            while (cur->next)
            {
                nb2++;
                cur = cur->next;
            }
            break;
        }
        cur = cur->next;
    }
    return(help_top(nb1,nb2,p));
}

int get_min_movement(t_stack  a, t_stack b)
{
    int posb;
    int posa;
    int count;
    int count1;
    t_stack cur;
    count = 0;
    count1 = 0;
    // -1  :  pa (1)
    // -2 : ra pa (2)
    if (b->position == a->position - 1)
    {
        return(-1);
    }
    else if (b->position == a->position + 1)
        return (-2);

    cur = b->next;
    while(cur)
    {
        if (cur->position == a->position - 1)
        {
            count = get_target_top1(b, cur->position);
            break;
        }
        if (cur->position == a->position + 1)
        {
            count1 = get_target_top1(b, cur->position);
            
        }
        cur = cur->next;
    }
    
    
}







