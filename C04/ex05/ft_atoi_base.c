#include <stdio.h>

int ft_atoi(char *str);
int ft_atoi_base(char *str, char *base);
int dec_to_base(int nb, int ns);
int dec_to_hex(int nb, int ns);
int check_sign_space(char *str);

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
int dec_to_base(int nb, int ns)
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
    ns = ft_atoi(base);
    sign = (check_sign_space(str));
    if (ns == 2 || ns == 8)
        return (dec_to_base(nb, ns) * sign);
    if (ns == 10)
        return (nb * sign);
    if (ns == 16)
        return (dec_to_hex(nb, ns));
}

int main(void)
{
    char test[] = "10";
    char base[] = "16";

    printf("%d", ft_atoi_base(test, base));
}