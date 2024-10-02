/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:20:39 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/30 19:05:01 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(int argc, char *argv[])
{
	if(argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	char *str = argv[1];
	printf("%d", ft_atoi(str));
	return (0);
}