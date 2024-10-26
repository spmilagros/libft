/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:22:31 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 17:07:31 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			nbr;
	long long int	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = num * -1;
	}
	if (num / 10 != 0)
		ft_putnbr_fd(num / 10, fd);
	nbr = '0' + (num % 10);
	write(fd, &nbr, 1);
}
/*int	main ()
{
	ft_putnbr_fd(5, 1);
	return(0);
}*/