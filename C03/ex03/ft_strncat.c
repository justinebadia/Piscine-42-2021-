/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:33:59 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:16:12 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	int				i;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src && (n < nb))
	{
		dest[i] = *src;
		i++;
		src++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
