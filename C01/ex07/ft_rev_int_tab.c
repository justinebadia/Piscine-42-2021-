/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:48:29 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:07:44 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (i < size)
	{
		t = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = t;
		i++;
		size--;
	}
}