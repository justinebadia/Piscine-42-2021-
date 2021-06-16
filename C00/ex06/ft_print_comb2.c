/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:50:08 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:03:15 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	d;
	int	u;

	d = 0;
	while (d <= 99)
	{
		u = d + 1;
		while (u <= 99)
		{
			ft_putchar((d / 10) + '0');
			ft_putchar((d % 10) + '0');
			write(1, " ", 1 );
			ft_putchar((u / 10) + '0');
			ft_putchar((u % 10) + '0');
			if (u != 99 || d != 98)
			{	
				write(1, ", ", 2);
			}	
			u++;
		}
		d++;
	}
}
