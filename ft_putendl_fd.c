/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:36:07 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/19 13:30:21 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include<fcntl.h>
//#include<stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!fd || !s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &"\n", 1);
}
/*
int main()
{
	char	a[] ="sad";
	int fd = open("niran.txt", O_WRONLY);
	ft_putendl_fd(a,fd);
}*/
