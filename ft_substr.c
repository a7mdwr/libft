#include "libft.h"
// calloc.......
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *sub;

    i = 0;
    if(!s)
        return NULL;
    if(start >= ft_strlen(s))
        return (char *)ft_calloc(1, 1);
    if((ft_strlen(s) - start) < len)
        len = ft_strlen(s) - start;
    sub = (char *)malloc(len + 1);
    if (sub == NULL)
        return NULL;
    while(len > i && s[start] != '\0')
    {
        sub[i] = s[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return sub;
}
// #include <stdio.h>
// int main()
// {
//     char *sub = ft_substr("hello world", 1000, 1);
//     printf("%s\n", sub);
//     // free(sub);
// }