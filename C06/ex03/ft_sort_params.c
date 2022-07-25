/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarroud <maarroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:03:42 by maarroud          #+#    #+#             */
/*   Updated: 2022/07/21 13:55:40 by maarroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	sort_arg(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (++j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = tmp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;

	sort_arg(argc, argv);
	i = argc;
	while (--i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
	return (0);
}
/*
	#include <stdlib.h>
56	int    main(void)
57	{
58	    int        i;
59	    int argc = 6;
60	    char **argv;
61	    argv = malloc(sizeof(char *) * 7);
62	    argv[0] = "a.out";
63	    argv[1] = "test5";
64	    argv[2] = "test8";
65	    argv[3] = "test7";
66	    argv[4] = "test6";
67	    argv[5] = "test4";
68	    argv[6] = "test1";
69	    
70	    sort_arg(argc, argv);
71	    i = argc;
72	    while (--i > 0)
73	    {
74	        ft_putstr(argv[i]);
75	        ft_putstr("\n");
76	    }
77	}
*/