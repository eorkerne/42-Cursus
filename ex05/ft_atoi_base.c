/*
#include <stdio.h>

int ft_atoi(char *str);
int ft_atoi_base(char *str, char *base);
int dec_to_base(int nb, int ns);
//int dec_to_hex(int nb, int ns);
int check_sign_space(char *str);
int ft_strlen(char *str);
int check_twice(char *base);
int check_isspace_sign_valid(char *str);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

int check_twice(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {   j = i + 1;
        while (base[j] != '\0')
        {
            if (base[j] == base[i])
                return(1);
            j++;
        }
        i++;
    }
    return(0);
}

int check_isspace_sign_valid(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\f' || str[i] == '\r'
    || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
    || str[i] == '+' || str[i] == '-')
        return (1);
        i++;
    }
    return (0);
}

int check_sign_space(char *str)
{
    int sign;
    int i;

    sign = 1;
    i = 0;
    while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r'
    || str[i] == '\n' || str[i] == '\t' || str[i] == '\v')
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    return(sign);
}
int dec_to_base(int nb, int ns, char *base)
{
   int temp;
   int remainder;
   int reverse;

   remainder = 0;
   reverse = 0; 
   temp = 0;
   while (nb > 0)
    {
        temp = temp * 10 + (nb % ns);
        nb = nb / ns;
    }
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    return(reverse);
}
/*
int dec_to_hex(int nb, int ns)
{
   int temp;
   int remainder;
   int reverse;

   remainder = 0;
   reverse = 0; 
   temp = 0;
   while (nb != 0)
    {   
        temp = (nb % ns);
        if (nb < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        temp
        nb = nb / ns;
    }
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    return(reverse);
}
*/
int ft_atoi(char *str)
{
    int nb;
    int i;

    i = 0;
    nb = 0;
    while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r'
    || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
    || str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - 48);
        i++;
    }
    return (nb);
}

int ft_atoi_base(char *str, char *base)
{
    int nb;
    int ns;
    int sign;


    nb = ft_atoi(str);
    if (!base || ft_strlen(base) == 1 || check_twice(base) == 1
        || check_isspace_sign_valid(base) == 1)
        return(0);
    ns = ft_strlen(base);
    sign = (check_sign_space(str));
    if (ns >= 2 && ns <= 16)
        return (dec_to_base(nb, ns) * sign);
    else
        return(0);
}

int main(void)
{
    printf("%d\n", ft_atoi_base("1234567890", "0123456789"));
	printf("%d\n", ft_atoi_base("10000000000000000", "01"));
	printf("%d\n", ft_atoi_base("5F5E100", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("104133633034", "0123456"));
	printf("%d\n", ft_atoi_base("-13344221014043", "01234"));
	printf("%d\n\n", ft_atoi_base("5EHL50J", "0123456789ABCDEFGHIJKLMNOPQ"));

	printf("%d\n", ft_atoi_base("!@#$%^&*()", ")!@#$%^&*("));
	printf("%d\n", ft_atoi_base("IOOOOOOOOOOOOOOOO", "OI"));
	printf("%d\n", ft_atoi_base("<C<B\"\'\'", "\'\"\?>.<,QWERT ABC"));
	printf("%d\n", ft_atoi_base("Qa QRRtRRaR ", "aQqR Tt"));
	printf("%d\n", ft_atoi_base("-_{{}}||_=_}=}{", "=_|{}"));
	printf("%d\n", ft_atoi_base("D'wyDZr", "ZXCS DF12345;:'\"qwertyas@#$"));
	printf("%d\n", ft_atoi_base("^$G$M", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= "));
	printf("%d\n\n", ft_atoi_base("!", "!@#$"));

	printf("T1: %d\n", ft_atoi_base("123456", "1234563"));
	printf("T2: %d\n", ft_atoi_base("1234", "12345-64"));
	printf("T3: %d\n", ft_atoi_base("1234", "12345678+"));
	printf("T4: %d\n", ft_atoi_base("", "1"));
	printf("T5: %d\n", ft_atoi_base("12345", ""));
	printf("T6: %d\n", ft_atoi_base("12345", "a12356a7"));
	printf("T7: %d\n", ft_atoi_base("     \t\v\f     +---------++-1235aaa776644", "a123567"));
	printf("T7: %d\n", ft_atoi_base("     \n\r\t     +---------++-1235aaa7766"  , "a123567"));
	printf("T8: %d\n", ft_atoi_base("            +----8----++-1235aaa7766", "a123567"));
	return (0);
}
*/