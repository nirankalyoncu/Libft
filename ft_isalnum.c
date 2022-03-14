/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:03:14 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/15 11:31:55 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
/*
#include<stdio.h>
int main()
{
	char c[] = "niran";
	printf("%d", ft_isalnum(c[3]));
}*/
