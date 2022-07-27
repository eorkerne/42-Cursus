
#include <stdlib.h>
#include "ft_stock_str.h"

int	main(void)
{
	int			size;
	char		**strs;
	t_stock_str	*s_result;

	size = 4;
	strs = malloc(sizeof(*strs) * size);
	strs[0] = "coucou";
	strs[1] = "comment";
	strs[2] = "ça va";
	strs[3] = "aujourd'hui ?";
	s_result = ft_strs_to_tab(size, strs);
	free(strs);
	ft_show_tab(s_result);
	return (0);
}