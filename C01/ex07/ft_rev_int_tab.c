#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1 - i)
	{
		ft_swap (&tab[i], &tab[size - i - 1]);
		i++;
	}
}

int main()
{	
	int arr1[5] = {0,1,2,3,4};
	
	ft_rev_int_tab(arr1, 5);
	printf("%d %d %d %d %d", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
}