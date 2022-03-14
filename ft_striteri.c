/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:56:06 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/22 17:53:09 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*
#include "stdio.h"

void to_lower(unsigned int a,char *b)
{
	while(*b != '\0')
	{
	*b = *b + 5;
	b++;
	}
	a = a + 1;
	printf("%d %s\n",a, b);
}
int	main()
{
 	char s[] = "ABC";
   	ft_striteri(s,to_lower);
	printf("---->\n%s\n<----",s);
}*/
