/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:33:19 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/02/19 13:07:17 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include <fcntl.h>
//#include <stdio.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	int fd = open("niran.txt",1);
	printf("%d",fd);
	ft_putchar_fd('c',fd);
}*/
