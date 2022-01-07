#include "libft_bonus.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (lst)
	{
		if (*lst)
		{
			last = *lst;
			while (last ->next)
				last = last->next;
			last->next = new;
		}
		else
			*lst = new;
	}
}
