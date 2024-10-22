#include <stddef.h>
#include "libft.h"
int ft_atoi(const char *str)
{
    size_t i;
    int result;
    int sign;

    sign = 1;
    result = 0;
    i = 0;
	while (((str[i] >= TAB && str[i] <= carriage) || (str[i] == SPACE)))
		i++;
    if((str[i] == '-' || str[i] == '+'))
    {
        if(str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     char str[] = "2222";
//     int num = ft_atoi(str);
//     printf("The integer value is: %d     %d\n", num, atoi(str)); 
//     return 0;
// }