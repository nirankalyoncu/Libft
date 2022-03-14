/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:06:58 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/18 15:16:11 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include<stdio.h>
int main()
{
	char a[] = "test";
	printf("%zu", ft_strlen(a));
}*/
