#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    i = 0;
    if(!s)
        return ; 
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
    s[i] = '\0';
}