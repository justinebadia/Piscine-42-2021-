/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:57:12 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/28 13:12:34 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		s1++;
		s2++;
	}	
	return (*s1 - *s2);
}

char	**ft_sort_in_tab(int argc, char	**argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	temp = 0;
	while (i < argc)
	{
		j = 2;
		while (j < argc - i)
		{
			if (ft_strcmp(argv[i], argv[i + j]) >= 1)
			{
				temp = argv[i];
				argv[i] = argv[i + j];
				argv[i + j] = temp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_in_tab(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
