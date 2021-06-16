/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:47:15 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/31 15:50:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

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

char	*ft_strcat_join(char *strs[], char sep[], int size, char *join)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j] != '\0')
		{
			join[k++] = strs[i][j];
		}
		if (i < size - 1)
		{
			j = -1;
			while (sep[++j] != '\0')
			{
				join[k++] = sep[j];
			}
		}
	}
	join[k] = '\0';
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*join;
	int		i;

	i = 0;
	join = NULL;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	join = (char *)malloc(sizeof(char) * length + 1);
	if (join == NULL)
		return (0);
	else
		ft_strcat_join(strs, sep, size, join);
	return (join);
}
