#include <stdio.h>
#include "libft.h"

// 
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dst = (unsigned char *)dest;
    unsigned char *sc = (unsigned char *)src;
    i = 0;
    if(dst > sc)
    {
        while (n > 0)
        {
            n--;
            dst[n] = sc[n];
        }
    }
    else
    {
        while (i < n)
        {
            dst[i] = sc[i];
            i++;
        }
    }
    return (dst);
}



#include <string.h>
// int main()
// {
//     char s[] ="ahmadwalid";

//     memmove(s + 5, s, 5);
//     printf("%s\n", s);
// }
#include <stdio.h>
#include <string.h>


// int main() {
//   char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// //   char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

//     printf("original : %s\n", sResult);
//     // printf("%s\n", sResult + 1);
//     // memmove(sResult + 1, sResult, 2);
//     ft_memmove(sResult + 1, sResult, 2);
//     printf("%s\n", sResult);
//     // if(!memcmp(sResult, sResult2, 7))
//     //     printf("wwwww");
// }
