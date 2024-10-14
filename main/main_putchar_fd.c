/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:24:30 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 23:25:25 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h> 

void	ft_putchar_fd(char c, int fd);

int main(void)
{
	int fd = open("pruebaputchar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putchar_fd('s', fd);
	close(fd);
	return (0);
}