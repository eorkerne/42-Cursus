#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i])
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
				(str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
				(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		i++;
	}
    return (str);
}

int main (void)
{
    char a[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("%s",(ft_strcapitalize(a)));
}