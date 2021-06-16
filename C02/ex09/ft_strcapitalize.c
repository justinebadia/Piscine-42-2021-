/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:20:00 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/26 13:13:21 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha_num(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{	
		return (c - 32);
	}
	return (c);
}	

int	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{	
		return (c + 32);
	}	
	return (c);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	str[0] = ft_to_upper(str[i]);
	i = 1;
	while (str[i] != '\0')
	{
		if (!(ft_str_is_alpha_num(str[i - 1])) && (ft_str_is_alpha_num(str[i])))
			str[i] = ft_to_upper(str[i]);
		else
			str[i] = ft_to_lower(str[i]);
		i++;
	}
	return (str);
}
