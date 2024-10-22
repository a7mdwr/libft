#include "libft.h"
#include "libft.h"
char *ft_strdup(const char *s)
{
    size_t i;
    char *dup;
    size_t len;

    i = 0;
    len = ft_strlen(s) + 1;
    dup = (char *)malloc(len);
    if (dup == NULL)
        return NULL;
    while(s[i] != '\0')
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return dup;
}



// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     char original[] = "Hello, World!";
    
//     // Duplicate the string using strdup
//     char *duplicate = ft_strdup(original);
    
//     if (duplicate == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
    
//     // Print the original and duplicate strings
//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);
    
//     // Free the allocated memory for the duplicate string
//     free(duplicate);

//     return 0;
// }
