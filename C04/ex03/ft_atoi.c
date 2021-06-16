/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:09:43 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:18:12 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	is_negative;

	is_negative = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}	
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{	
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * is_negative);
}
