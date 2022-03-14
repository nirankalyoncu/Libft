/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:12:21 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/15 17:27:46 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int str)

{
	if (str >= 'A' && str <= 'Z')
		str += 32;
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char a = 'A';
	printf("%d", ft_tolower(a));
}*/
