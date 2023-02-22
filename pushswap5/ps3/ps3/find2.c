#include "push_swap.h"

int find_min_index(t_list *a, int size)
{
    int min_index;

    min_index = size;
    while(a)
    {
        if(a->index <= min_index)
            min_index = a->index;
        a = a->next;
    }
    return min_index;
}

int		find_index(t_list *a, int min)
{
	t_list	*tmp;
	int	i;

	i = 0;
	tmp = a->next;
	while (tmp)
	{
		if (tmp->data == min)
			return (i + 1);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

int find_max_index(t_list *a)
{
    int max_index;
    max_index = 1;
    while(a)
    {
        if(a->index >= max_index)
        {
            max_index = a->index;
        }
        a = a->next;
    }
    return max_index;
}

int find_min_index_rank(t_list *a, int size)
{
    int min_index;
    int i;

    i = 1;
    min_index = size;
    while(a)
    {
        if(a->index == min_index)
        {
            min_index = a->index;
            return i;
        }
        a = a->next;
        i++;
    }
    return i;
}

int first_half_index(t_list *a, int size)
{
    int i;
    int min;
    t_list *inter;

    i = 1;
    inter = a;
    min = find_min_index(a, size);
    while(i <= size/2)
    {
        if(inter->index == min)
            return 1;
        inter = inter->next;
        i++;
    }
    return 0;
}