/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:19:34 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 16:29:43 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'Z')
				argv[1][i] = 'A';			
			else if (argv[1][i] == 'z')
				argv[1][i] = 'a';
			else if ( argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] = argv[1][i] + 1;			
			else if ( argv[1][i] >= 'a' && argv[1][i] <= 'y')
				argv[1][i] = argv[1][i] + 1;
		write(1, &argv[1][i], 1);
		i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
