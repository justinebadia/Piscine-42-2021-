/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:57:11 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:04:05 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}	
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int main ()
{
	ft_putnbr(520);
}
