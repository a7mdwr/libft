#include "libft.h"
#include <stdio.h>
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst)
        return;
    del(lst->content);
    free(lst);
}

// void del(void *s)
// {
//     free(s);
// }

// int main()
// {

//     t_list *l = ft_lstnew(NULL);
//     l->content = malloc(10);
//     ft_strlcpy(l->content, "123456789", 9);
//     // printf("%s\n", (char *)l->content);
//     ft_lstdelone(l, del);
// }