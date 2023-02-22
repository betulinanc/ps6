# include "push_swap.h"

void sort_plus(t_list *a, t_list *b, int size)
{
	static int s2;
    int rank;
    int i;
    int k=ft_lstsize(a)/3-1;
    
    i = 1;
	s2 = size;
    s2= s2 / 2;
    while(i<=k)
    {
        while(find_min_index(a, size) <= 3*i )
        {
            if(a->index <= 3*i)
            {
                pb(&b, &a);
                if(already_sorted(a))
                        break;
            }
           else
           {
                rank = find_min_index_rank(a, s2);
                if(rank >= ft_lstsize(a)/2)
                {
                    rra(a);
                    if(already_sorted(a))
                        break;
                    pb(&b,&a);
                }
                else
                {
                    ra(a);
                    if(already_sorted(a))
                        break;
                }
           }
           //printf("%d\n" ,find_min_index(a,size));
        }
        //sorting_0(b,3);
        i++;
        //printf("A%d\n %d",i,k);
    }
}
