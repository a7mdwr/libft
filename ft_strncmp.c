#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
// int main()
// {
//     char s1[] = "ahmad";
//     char s2[] = "a7mad";
//     printf("%d\n", ft_strncmp(s1, s2 , 3));
// }