#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
    while (lst->next)
        lst = lst->next;
    return lst;
}

#include <stdio.h>

 int main()
 {
    char *str = "sakjlagjlkjsg";
    char *str1 = "sakjlasrgjlkjsg";
    char *str2 = "sakjlfdagjlkjsg";
    t_list *lst = ft_lstnew(str);
    t_list *lst2 = ft_lstnew(str1);
    t_list *lst3 = ft_lstnew(str2);

    lst->next = lst2;
    lst2->next = lst3;
    t_list *tmp = ft_lstlast(lst);

    printf("%s\n", (char *)tmp->content);
 }