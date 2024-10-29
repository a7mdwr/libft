#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
     size_t i;

      i = 0;
      unsigned char *str = (unsigned char *)s;
      while(i < n)
      {
            str[i] = (unsigned char)c;
            i++;
      }
      return (s);
}

// #include <stdio.h> 
// #include <string.h> 
  
// int main() 
// { 
//     char str[50] = "GeeksForGeeks is for programming geeks."; 
//     printf("\nBefore memset(): %s\n", str); 
  
//     // Fill 8 characters starting from str[13] with '.' 
//     ft_memset(str + 13, '.', 8*sizeof(char)); 
  
//     printf("After memset():  %s\n", str); 
//     return 0; 
// } 