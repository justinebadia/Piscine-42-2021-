/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:35:18 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/30 11:46:20 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;

	dest = NULL;
	length = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * length + 1);
	if (dest == NULL)
		return (0);
	else
		ft_strcpy(src, dest);
	return (dest);
}
