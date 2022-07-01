#include <stdio.h>
#include <stdlib.h>

unsigned int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int j;
    unsigned int i;

    j = 0;
	if (!src || !dest)
		return (0);
    i = ft_strlen(src);
	if (size <= 0)
		return (i);
    while (src[j] != '\0' && j < size - 1)
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (i);
}

 int main(void)
{
     char *s = "MERCI LE Sdsqdq";
     char *d = "sqlt";

     d = malloc(sizeof(char) * ft_strlen(s));

     printf("%u", ft_strlcpy(d, s, 10));
}