/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:08:42 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/18 16:25:59 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int str)

{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char a = 'a';
	printf("%d", ft_toupper(a));
}*/
