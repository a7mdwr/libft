#include <stdio.h>
#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    unsigned char *str = (unsigned char *)s;
    while(i < n)
    {
        if(str[i] == (char)c)
        {
            return (&str[i]);
        }
        i++;
    }
    return NULL;
}
// int main(){
//     char buffer[] = "Hello, World!";

//     // Search for the character 'W' in the buffer
//     char *found = ft_memchr(buffer, 'W', strlen(buffer));
//     printf("%d\n", found);
//     // if (found != NULL) {
//     //     printf("Found 'W' at position: %ld\n", found - buffer);
//     // } else {
//     //     printf("'W' not found!\n");
//     // }

//     return 0;
// }
