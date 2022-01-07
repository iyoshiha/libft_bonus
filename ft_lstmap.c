#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

	t_list *new;

    new = ft_lstnew((*f)(lst->content));

}
