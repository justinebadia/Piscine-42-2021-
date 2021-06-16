/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:53:58 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 16:19:27 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1,&str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	t;

	i = 0;
	if (argc == 2)
	{
			size = ft_strlen(argv[1]);
			while (i < size)
			{
				t = argv[1][i];
				argv[1][i] = argv[1][size -1];
				argv[1][size - 1] = t;
				i++;
				size--;
			}
			ft_putstr(argv[1]);
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
