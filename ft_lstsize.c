#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if(!lst)
        return 0;
    while(lst)
    {
        i++;
        lst = lst->next;
    }
    return i;
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
    t_list *tmp = lst;

    printf("%d\n", ft_lstsize(NULL));
    // while(tmp)
    // {
    //     printf("%i\n",(char*)tmp->content );
    //     tmp = tmp->next;
    // }
 }