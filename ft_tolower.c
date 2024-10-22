int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return c;
}

// #include <stdio.h>
// #include <ctype.h>

// int main() 
// {
//     char c = 'B';

//     printf("me: %c\n", ft_tolower(c));
//     printf("Uppercase character: %c\n", tolower(c));

//     return 0;
// }