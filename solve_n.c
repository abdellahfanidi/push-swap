#include "push_swap.h"


void set_position(t_stack *a,int *tab)
{
    int i;
    int len;
    t_stack current;

    current = *a;
    len = ft_lstsize(current);
    while (current)
    {
        i = 0;
        while(i < len)
        {
            if (tab[i] == current->data)
            {
                current->position = i;
                break;
            }
            i++;
        }
        current = current->next;
    }
}

int* complete_tab(t_stack a)
{
    int i;
    int *tab;
    int tmp;
    int len;

    len = ft_lstsize(a);
    i = 0;
    tab  = malloc(sizeof(int) * len);
    while(a)
    {
        tab[i++] = a->data;
        a = a->next;
    }
    i = 1;
    while (i < len)
    {
        if ( tab[i] < tab[i-1] )
        {
            tmp = tab[i]; 
            tab[i] = tab[i-1];
            tab[i-1] = tmp;
            i = 0;
        }
        i++;
    }
    return (tab);
}



void solve_n(t_stack *a,t_stack *b)
{
    t_stack cur_a;
    t_stack cur_b;
    int min;
    int max;

    cur_a = *a;
    // all element in stack  b sauf 3 last element
    while (cur_a)
    {
        if (ft_lstsize(cur_a) == 3)
            break;
        pb(a,b);
        cur_a = cur_a->next;
    }
    solve_iii(a);
    write(1,"\nstack b :",10);print_stack(*b);
    cur_b = *b;
    
        //write(1,"\n-----00 :",10);
        cur_a = *a;
        // while(cur_a && cur_a->next)
        // {
        //     while (cur_b)
        //     {
        //         if (cur_a->next->position > (cur_a->position + 1))
        //         {
        //             if (cur_b->position == (cur_a->position + 1))
        //             {
        //                 get_target_top(b, cur_b->position);
        //                 ra(a);
        //                 pa(a,b);
        //                 break;
        //             }
                
        //         }
        //         cur_b = cur_b->next;
        //     }
        //     cur_a = cur_a->next;
        // }
        /*
         if ((*a)->position == cur_b->position + 1)
         {
            get_target_top(b, cur_b->position);
            pa(a,b);
         }*/
        
     

      write(1,"\nstack b :",10);print_stack(*b);
    
}



int main(int ac,char **av)
{
    t_stack p,p1;
     push_all(&p, ac, av);
     set_position(&p,complete_tab(p));
    // write(1,"\nstack a :",10);print_stack(p);
    
    // write(1,"\nstack b :",10);print_stack(p1);
    // write(1,"\nstack a :",10);print_stack(p);

    write(1,"\nstack a :",10);print_stack(p);
   //int i = get_target_top(&p, 0);
   //if (i)
    solve_n(&p,&p1);
   write(1,"\nstack a :",10);print_stack(p);
}
