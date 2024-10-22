#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;
    size_t len;

    i = 0;
    if (!s)
        return NULL;
    len = ft_strlen(s);
    str = (char *)malloc(len + 1);
    if (str == NULL)
        return NULL;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}

// char fun(unsigned int i, char c)
// {
//     (void)i;
//     if(c >= 'a' && c <= 'z')
//         c -= 32;
//     return c;
// }

// #include <stdio.h>
// int main()
// {
//     char *str = ft_strmapi("ahmad", fun);
//     printf("%s\n", str);
//     free(str);
// }