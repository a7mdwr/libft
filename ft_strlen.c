#include <stddef.h>
#include "libft.h"
#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

// #include <stdio.h>
// int main()
// {
//     char s[] = "ahmad";
//     printf("%ld\n", ft_strlen(s));
// }