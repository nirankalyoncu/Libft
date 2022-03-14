/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:32:52 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/25 13:11:18 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*src2;

	if (n == 0 || dest == src)
		return (dest);
	str = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (--n)
	{
		*str = *src2;
		str++;
		src2++;
	}
	*str = *src2;
	return (dest);
}
/*
#include<stdio.h>
int main()
{
	char dizi1[] = "niran";
	char dizi2[]= "kalyoncu";
	printf("%s", ft_memcpy(dizi1, dizi2, 3));
}*/
