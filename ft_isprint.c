/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:07:43 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/18 15:36:55 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include<stdio.h>
int main()
{
	char a = '\t';
	char b = 'd';
	char c = '!';
	printf("%d", ft_isprint(a));
}*/
