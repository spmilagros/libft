/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_stren.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:29:29 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/20 16:54:43 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv)
{
	if(argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	char *str = argv[20];
	printf("%d", ft_strlen(str));
	return (0);
}
