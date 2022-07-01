#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] - s2[i] != 0)
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
return (s1[i] - s2[i]);
}

int main (void)
{
     char *s1 = "";
     char *s2 = "kjnoihjn";

     printf("%d\n", ft_strncmp(s1, s2, 10));
     printf("%d\n", strncmp(s1, s2, 10));
}