/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:20:05 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/23 09:16:43 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= 'A' && *i <= 'Z')
		{
			*i = *i + 32;
		}
		i++;
	}
	return (str);
}