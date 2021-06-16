/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:48:34 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/30 17:05:23 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;
	int	*tab;

	i = -1;
	length = max - min;
	tab = NULL;
	if (min >= max)
	{	
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(sizeof (int) * length + 1);
	if (tab == NULL)
	{	
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (++i < length)
	{
		tab[i] = min++;
	}
	tab[i] = '\0';
	return (length);
}
