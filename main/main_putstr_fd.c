/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:24:35 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/21 23:03:25 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd);

int main(void)
{
	int fd;

	fd = open("output_str.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1); 
	ft_putstr_fd("Hello 42 Madrid!", fd);
	close(fd);
	return (0);
}