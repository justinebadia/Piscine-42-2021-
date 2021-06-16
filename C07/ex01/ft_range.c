/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 11:38:09 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/30 11:39:37 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	n;
	int	length;

	n = min;
	length = max - min;
	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = (int *)malloc(sizeof(int) * length + 1);
	while (n < max)
	{
		tab[i] = n ;
		n++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
