/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:24:44 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 23:26:33 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // Para open
#include <unistd.h> // Para close

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int	fd;

	fd = open("numero.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);
	ft_putnbr_fd(42, fd);
	close(fd);
	return (0);
}