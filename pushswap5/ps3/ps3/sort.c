# include "push_swap.h"

void sort_list(t_list *a, t_list *b, int size)
{ 
    if (size/2 < 2)
		sorting_0(a,size);
    else if (size > 3 && size <= 5)
        sorting_2(a, b, size);
    else if (size > 5)
		    sorting_3(a, b, size);
    //printf("%d %d %d",a->data,a->next->data,a->next->next->data);
}