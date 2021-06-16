/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 16:51:26 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 18:00:50 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(char nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else	
			ft_putnbr(nb);
		nb++;
		write(1, "\n", 1);
	}
}
