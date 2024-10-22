#include <stddef.h>
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    // if(s[i] == '\0')
    //     return NULL;
    if(s == NULL)
        return NULL;
    while (s[i] != '\0')
        i++;
    while (i > 0)
    {
        if(s[i] == (char)c)
            break;
        i--;
    }
    if(s[i] == (char)c)
        return (char *)&s[i];
    return NULL;
}


// #include <string.h>
// #include <stdio.h>

// #include "libft.h"
// int main()
// {
//     char s[] = "hahmaad";
//     printf(" %ld\n", sizeof(ft_strrchr(s, 0)));
//     	/* 5 */ check(ft_strrchr(s, 0) == s + strlen(s)); showLeaks();
//     // printf("org= %s\n", strrchr(s, 'a') );
 
// }
