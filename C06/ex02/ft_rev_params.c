#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    while (++i < argc)
    {
        ft_putstr(argv[argc - i]);
        ft_putstr("\n");
    }
    return (0);
}