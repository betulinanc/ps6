#include "push_swap.h"

void sorting_0(t_list *a, int size2)
{
    int max_index;
    int min_index;

    max_index = find_max_index(a);
    min_index = find_min_index(a, size2);
    if(a->index == max_index)
    {
        ra(a);
        if(a->index > a->next->index)
            sa(a);
    }
    else if(a->index == min_index)
    {
        if(!(a->next->index < a->next->next->index))
        {
            rra(a);
            sa(a);
        }
    }
    else
    {
        if(a->next->index < a->index)
            sa(a);
        else
        {
            rra(a);
        }
    }
}

void	sorting_2(t_list *a, t_list *b, int size)
{
	int ret;
	int min;

	while (ft_lstsize(a) > 3)
	{
		min = find_min_index(a, size);
		ret = first_half_index(a, size);
		while(a->index != min && ft_lstsize(a) > 3)
		{
			if(ret == 1)
				ra(a);
			else
				rra(a);
		}
		pb(&b, &a);
	}
	sorting_0(a,size);
	while(b)
		pa(&a, &b);
}

void	sorting_3(t_list *a, t_list *b, int size)
{
	//while (a->next)
	{
		int	min = find_min_index(a, size);
		int	min_index = find_index(a, min);
		if (min_index < (size / 2 + 1))
		{
			while (min_index > 1)
			{
				ra(a);
				min_index--;
			}
		}
		else
		{
			while (min_index != ft_lstsize(a) + 1)
			{
				rra(a);
				min_index++;
			}
		}
		pb(&b, &a);
	}
	while (b != NULL)
		pa(&a, &b);
}
