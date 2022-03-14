/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:28:15 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/18 13:47:38 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (p);
	ft_bzero(p, (count * size));
	return (p);
}
/*
#include<stdio.h>
int main()
{
	char *a = "merhaba";
	int a_len;
	printf("%s",a);
	a_len =ft_strlen(a);
	a = (char *)ft_calloc(a_len, sizeof(char *));
	printf("%s",a);
}*/
