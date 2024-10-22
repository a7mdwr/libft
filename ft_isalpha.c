int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
    else
    {
       return (0); 
    }
}

// #include <stdio.h>
// int main()
// {
//     int c = '3';
//     printf("%d\n", ft_isalpha(c));
// }

