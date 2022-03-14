/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:58:34 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/24 16:58:12 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			n;

	n = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * n;
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}
/*
int main()
{
    char t[] = "   -+ab13";
    printf("$%d$",ft_atoi(t));
}*/
