#include "libft.h"
#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    char *dst = (char *)dest;
    char *sc = (char *)src;
    if (!dest && !src)
      return NULL;
    while (i < n)
    {
      dst[i] = sc[i];
      i++;
    }
    return dst;
}

// #include <string.h>

// #include <stdio.h>

// int main()
// {
//     char s[] ="ahmad";
//     char d[100] = "l";

//     ft_memcpy(d, s, 10000);
//      printf(" %s  \n", d );
// }