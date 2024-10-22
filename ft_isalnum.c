int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    else if(c >= '0' && c <= '9')
    {
       return (1); 
    }
    else
    return 0;
}

#include <stdio.h>

#include <stdio.h>
#include <string.h>

// int main() {
    
//     // Find the first occurrence of 'o'

//     printf("%s", strchr("hahmad", 'h'));

//     return 0;
// }
