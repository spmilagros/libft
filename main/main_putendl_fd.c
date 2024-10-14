/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:24:40 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 23:26:15 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> // Para open()
#include <unistd.h> // Para close()

void	ft_putendl_fd(char *s, int fd);

int main(void)
{
	int fd;

	fd = open("output_endl.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putendl_fd("Hello 42 Madrid!", fd);
	close(fd);
	return (0);
}