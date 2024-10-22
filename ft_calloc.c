#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *cal;

    if (nmemb == 0 || size == 0)
        return malloc(1);
    if ((int)nmemb < 0 || (int)size < 0)
        return NULL;
    if (nmemb > SIZE_MAX / size)
        return NULL;
    cal = malloc(nmemb * size);
    if(!cal)
        return (NULL);
    ft_bzero(cal, nmemb * size);
    return (cal);
}
// #include <stdio.h>
// int main(){
//     char *m = ft_calloc(sizeof(char) , 10);
//     int i = 0;
//     while (i < 10){
//         printf("%d\n", (int)m[i]);
//         i++;
//     }
//     free(m);
// }

