/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:32:54 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 14:59:39 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0')
	{
		write(1, &str[i], 1);
		i++;
	}
	str[i] = '\0';
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = argv[1][i] + 13;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] = argv[1][i] + 13;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = argv[1][i] - 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] = argv[1][i] - 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	//	ft_putstr(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
