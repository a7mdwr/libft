#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    if(s == NULL)
        return NULL;
    while (*s != '\0')
    {
        if(*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }
    if ((char)c == '\0')
        return (char *)s;
    return NULL;
}
    
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     // char s[] = NULL;
//     // char c = '1';
//     printf("my func %s\n", ft_strchr("ahmid", 'i') );
// }