#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_ulstr(char **str)
{
	int	i;

	i = 0;
	while (str[1][i])
	{
		if (str[1][i] >= 'a' && str[1][i] <= 'z')
		{
			str[1][i] -= 32;
			if (str[1][i + 1] == '\0')
				break ;
			i++;
		}
		if (str[1][i] >= 'A' && str[1][i] <= 'Z')
		{
			str[1][i] += 32;
			if (str[1][i + 1] == '\0')
				break ;
			i++;
		}
		else if (!((str[1][i] >= 'a' && str[1][i] <= 'z')
				|| (str[1][i] >= 'A' && str[1][i] <= 'Z')))
		{
			if (str[1][i + 1] == '\0')
				break ;
			i++;
		}
	}
	return (str[1]);
}

int main(int argc, char **argv)
{
	if (argc != 2)
		{
			ft_putstr("\n");
			return (0);
		}
	ft_putstr(ft_ulstr(argv));
	ft_putstr("\n");
	return (0);
}