#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char    b;
    char    a;
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-" , 1);
        n *= -1;
    }
    if (n >= 0 && n <= 9)
    {
        a = n + '0';
        write(fd, &a, 1);
    }
    else 
    {
        ft_putnbr_fd(n / 10, fd);
        b = (n % 10) + '0';        
        write(fd, &b, 1);
    }
}
 
// int main()
// {
//     ft_putnbr_fd(INT_MIN, 1);
// }