#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    tmp = (*lst)->next;
    while (*lst)
    {
        ft_lstdelone(*lst, del);
        tmp = tmp->next;
    }
}