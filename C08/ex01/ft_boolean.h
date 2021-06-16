/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.c>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 14:43:31 by jbadia            #+#    #+#             */
/*   Updated: 2021/03/30 16:11:33 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have odd number of arguments.\n"
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(x) "x % 2 == 0" 
typedef int t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif 
