/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:29:29 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 01:17:40 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	if(argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	char *str = argv[1];
	printf("%d \n", ft_strlen(str));
	return (0);
}
