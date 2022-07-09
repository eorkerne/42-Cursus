#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
        unsigned int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] - s2[i] != 0)
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
return (s1[i] - s2[i]);
}

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
    int j;
    char *tmp;

    
    i = 0;
    while (++i < argc)
    {
        j = i;
        while (j < argc - i)    
        {
            if (ft_strcmp(argv[j],argv[j + 1]) < 0)
            {
                tmp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = tmp;
                j = 1;
            }
            else
                j++;
        }
    }
    i = argc;
    while (--i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}