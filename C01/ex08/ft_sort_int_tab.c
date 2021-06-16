/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:08:59 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:09:07 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;
	int	s;

	t = 0;
	i = 0;
	j = 1;
	s = size - 1;
	while (i < s)
	{
		j = 1;
		while (j <= s - i)
		{
			if (tab[i] >= tab[i + j])
			{	
				t = tab[i];
				tab[i] = tab [i + j];
				tab[i + j] = t;
			}
			j++;
		}
		i++;
	}
}
