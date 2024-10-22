#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    char *hay = (char *)haystack;
    if (!*needle)
        return (char *)haystack;
    if (len == 0)
        return NULL;
    while(haystack[i] && i + ft_strlen(needle) <= len)
    {
        if(needle[j] == haystack[i])
        {
            if(ft_memcmp(needle, &haystack[i], ft_strlen(needle)) == 0)
                return &hay[i];
        }
        i++;
    }
    return NULL;
}
// #include <stdio.h>
// #include "libft.h"
// #include <bsd/string.h>
// int main(void)
// {
//     const char haystack[] = "Hello, Worid!lllll";
//     const char needle[] = "World";
//     size_t len = 13;

//     char *result;
//     result = ft_strnstr(haystack, needle, len);
//     printf("%s\n", result);
// }



