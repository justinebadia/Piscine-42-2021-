/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 11:47:31 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 13:56:22 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				i++;
			}
		ft_putstr(argv[1]);
		}
		else
			ft_putstr(&argv[1][i]);
	}
	else
		write(1, "\n", 1);
}
