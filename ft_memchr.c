/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:57:17 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/28 13:29:58 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*nptr;
	unsigned char	nc;

	nptr = (unsigned char *)ptr;
	nc = (unsigned char)c;
	while (len > 0)
	{
		if (*nptr == nc)
			return (nptr);
		nptr++;
		len--;
	}
	return (NULL);
}
/*
int main()
{
	char dizi[] = "niran";
	printf("%p", ft_memchr(dizi, 'i', 4));
}*/
