/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:15:30 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 10:20:03 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'Y';
	while (b >= 'A')
	{
		write(1, &a, 1);
		a-=2;
		write(1, &b, 1);
		b -=2;
	}
	return(0);
}