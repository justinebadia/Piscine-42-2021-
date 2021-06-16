/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:51:33 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 12:09:39 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main (int argc, char **argv)
{
	int	letter;
	int	i;

	letter = 0;
	i = 0;
	if (argc == 2)
	{
		if (argv[1][i] == '\0')
			write(1, "\n", 1);
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter = argv[1][i] - 64;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter = argv[1][i] - 96;
			while (letter != 0)
			{
				write(1, &argv[1][i], 1);
				letter--;
			}
			letter = 0;
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
