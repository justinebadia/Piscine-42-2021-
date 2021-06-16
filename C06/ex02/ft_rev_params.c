/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 11:53:34 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/28 13:11:43 by jbadia           ###   ########.fr       */
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

int	main (int argc, char **argv)
{
	int	i;

	i = argc - 1 ;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
