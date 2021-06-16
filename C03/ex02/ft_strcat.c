/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:34:07 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:15:48 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*i != '\0')
	{	
		i++;
	}
	while (*src != '\0')
	{	
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}
