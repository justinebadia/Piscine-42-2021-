/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:45:12 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:03:05 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char u, char d, char c)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(u, d, c);
				if (! (u == '9' && d == '8' && c == '7'))
				{
					write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
