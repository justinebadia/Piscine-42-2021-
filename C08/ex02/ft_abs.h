/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:11:47 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/30 18:12:44 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

//#ifndef FT_ABS_H
//#define FT_ABS_H

#define Value 12

int main()
{	
#if Value < 0
	Value = Value * (-1);
	return (Value);
#else
	return (Value);

#endif
	return(0);
}
