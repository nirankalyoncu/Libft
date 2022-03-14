/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:27:48 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/18 15:15:52 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)

{
	size_t	i;

	i = 0;
	while (i < size && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
		char a[10] = {'E','n','g','l','i','s','h',0,'A'};
    char b[10] = {'E','n','g','l','i','s','h',0,'B'};
	printf("%d", ft_strncmp(a, b, 10));
}*/
