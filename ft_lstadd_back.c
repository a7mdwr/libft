#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp = *lst;
    while(tmp)
    {
        if(tmp->next == NULL)
        {
            tmp->next = new;
            return ;
        }
        tmp = tmp->next;
    }
}

// #include <stdio.h>
//  int main()
//  {
//     char *str = "sakjlagjlkjsg";
//     char *str1 = "sakjlasrgjlkjsg";
//     char *str2 = "sakjlfdagjlkjsg";
//     t_list *lst = ft_lstnew(str);
//     ft_lstadd_back(&lst, ft_lstnew(str));
//     ft_lstadd_back(&lst, ft_lstnew(str1));
//     ft_lstadd_back(&lst, ft_lstnew(str2));
//     t_list *tmp = lst;
//     while (tmp)
//     {
//         printf("%s\n", (char *)tmp->content);
//         tmp = tmp->next;
//     }
    
//  }