#include "libft.h"
#include <string.h>
void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}


// #include <stdio.h> 
// #include <string.h> 
  
// int main() 
// { 
//         int buffer[10] = {1, 2, 3, 4, 5};
//         int i = 0;
//         while (i < 5)
//             printf("%d\n", buffer[i++]);
//         ft_bzero(buffer, 16);

//         i = 0;
//         while (i < 5)
//             printf("%d\n", buffer[i++]);

//         // char *str = "aaaa";
    
//     // printf("Before bzero: %d\n", buffer);  // Output: "abcdefghi"
//     // ft_bzero(buffer, 5);                   // Zero out the first 5 bytes
//     // printf("After bzero: %d\n", (int *)buffer);   // Output: "\0\0\0\0\0fghi"
    
//     return 0;
// } 