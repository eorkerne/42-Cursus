int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

char    *ft_strcat(char *dest, char *src)
{
    int dest_len = ft_strlen(dest);
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return (dest);
}