/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:14:46 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/15 11:20:58 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}
/*
#include<stdio.h>
int main()
{
	char a= 'a';
	printf("%d", ft_isalpha(a));
}*/
