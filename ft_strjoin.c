#include "libft.h"
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t j;
    size_t i;
    char *str;
    size_t len;

    i = 0;
    j = 0;
    if(!s1 && !s2)
        return NULL;
    if(s1 == NULL && s2)
        return (ft_strdup(s2));
    if(s1 && s2 == NULL)
        return (ft_strdup(s1));
    len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(len + 1);
    if (str == NULL)
        return NULL;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    return str;
}

// #include <stdio.h>
// int main()
// {
//     char *str = ft_strjoin("asdasd", "fff");
//     printf("%s\n", str);
//     free(str);
// }