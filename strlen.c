#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(void)
{
	char *str;
	size_t	i;
	size_t max_int;

	max_int = 2147483650;
	str = malloc(sizeof(char) * (max_int));
	if (!str)
		return (0);
	i = 0;
	while (i < max_int)
	{
		str[i] = 'b';
		i++;
	}
	str[i] = '\0';
	printf("%zu\n", ft_strlen(str));
	return (0);
}