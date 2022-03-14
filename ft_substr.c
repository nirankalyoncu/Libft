/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:19:35 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/18 14:15:31 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char const a[] = "Niran";
	unsigned int b = 1;
	size_t len = 3;
	printf("%s", ft_substr(a,b,len));
}*/
