#include "push_swap.h"

static int help_top(int nb1, int nb2,t_stack *p)
{
    int r1;
    int r2;
    r1 = 0;
    r2 = 0;
    if (nb1 == 1)
        return (1);
    if (nb1 > (ft_lstsize(*p) / 2))
        while(nb2 > 0)
        {
            //rra(p);
            r1--;
            nb2--;
        }
    else
        while(nb1 != 1)
        {
            //ra(p);
            r2++;
            nb1--;
        }
    if (r1 > (r2 * -1))
        return (r1);
    else
        return (r2);
}

int get_target_top1(t_stack p, int pos)
{
    t_stack cur;
    int nb1;
    int nb2;
    int i;
    
    cur = p;
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