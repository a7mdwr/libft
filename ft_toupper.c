int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return c;
}

// #include <stdio.h>
// #include <ctype.h>

// int main() 
// {
//     char c = 'b';

//     printf("me: %c\n", ft_toupper(c));
//     printf("Uppercase character: %c\n", toupper(c));

//     return 0;
// }