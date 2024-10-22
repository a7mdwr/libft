#include "libft.h"
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t len;
    size_t i;

    i = 0;
    len = ft_strlen(src);
    if (size == 0)
        return len;
    while(src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return len;
}
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int main()
// {
//     char dest[15];
//     const char *src = "Hello, world!aaaaa";
//     printf("%ld\n", strlcpy(dest, src, 10));
//     printf("%s\n", dest);
// }