/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:18:34 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/22 17:02:38 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)

{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	while (0 < len)
	{
		if (*dest != *src)
			return (*dest - *src);
		len--;
		src++;
		dest++;
	}
	return (0);
}

/*#include<stdio.h>
int main()
{
	char a[10] = {'E','n','g','l','i','s','h',0,'A'};
    char b[10] = {'E','n','g','l','i','s','h',0,'B'};
	printf("%d", ft_memcmp(a, b, 10));
}*/
