/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:39:43 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 09:41:59 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str[i] = '\0';
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	char			*ptrd;
	char			*ptrs;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	ptrd = dest;
	while (*ptrd)
		ptrd++;
	ptrs = src;
	i = 0;
	while (*ptrs && i + len_dest < size - 1 )
	{
		*ptrd = *ptrs;
		i++;
		ptrd++;
		ptrs++;
	}
	*ptrd = '\0';
	if (len_dest > size)
		len_dest = size;
	return (len_dest + len_src);
}
