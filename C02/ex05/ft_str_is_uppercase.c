int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while (str[i] >= 'A' && str[i] <= 'Z')
        i++;
    if (str[i] == '\0')
        return (1);
    else
        return (0);
}