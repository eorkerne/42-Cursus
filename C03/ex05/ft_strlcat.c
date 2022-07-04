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
    unsigned int dest_len;
    unsigned int i;

    dest_len = ft_strlen(dest);
    i = 0;
    while (dest_len < size)
		dest_len++;
    while (i + dest_len + 1 < size && src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    if (dest_len != size)
        dest[dest_len + i] = '\0';
    return (dest_len + ft_strlen(src));
}

int main(void)
{
    char dst[100] = "12345";
    char src[100] = "ABCD";

    printf("Retourne %u\n", ft_strlcat(dst, src, 4));
    printf("dst = %s\n", dst);
    printf("src = %s\n", src);

    return (0);
}