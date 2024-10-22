#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(lst || new)
    {
        new->next = *lst;
        *lst = new;
    }
}

// #include <stdio.h>

// int main()
// {
//     char *str = "sakjlagjlkjsg";
//     char *str1 = "sakjlasrgjlkjsg";
//     char *str2 = "sakjlfdagjlkjsg";
//     t_list *lst = ft_lstnew(str);
//     t_list *lst2 = ft_lstnew(str1);
//     t_list *lst3 = ft_lstnew(str2);
    
    // lst->next = lst2;
    // lst2->next = lst3;
//     ft_lstadd_front(&lst, ft_lstnew("sgkoskg"));
//     t_list *tmp = lst;
//     while(tmp)
//     {
//         printf("%s\n", (char *)tmp->content);
//         tmp = tmp->next;
//     }

//     t_list *next;
//     while(lst)
//     {
//         next = lst->next;
//         free(lst);
//         lst = next;
//     }
// }