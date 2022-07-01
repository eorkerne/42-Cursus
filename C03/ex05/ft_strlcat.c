#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = ft_strlen(dest);
    unsigned int i;
    unsigned int j;

    i = 0;
    if (!src || !dest)
		return (0);
    if (size <= 0)
		return (j);
    while (i < size && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    j = ft_strlen(dest);
    return (j);
}

int main(void)
{
    char dst[100] = "1234";
    char src[100] = "ABCD";

    printf("Retourne %u\n", ft_strlcat(dst, src, 2));
    printf("Retourne %lu\n", strlcat(dst, src, 2));
    printf("dst = %s\n", dst);
    printf("src = %s\n", src);

    return (0);
}