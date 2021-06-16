/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:50:24 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/28 13:11:04 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{	
		write(1, str, 1);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
