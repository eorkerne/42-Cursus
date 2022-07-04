#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

    char password[100] = "MAX LE LES BOGOSS";

    printf("%s\n", strstr(password, argv[1]));
	printf("%s\n", ft_strstr(password, argv[1]));

    return 0;
}