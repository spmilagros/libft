/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:56:37 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 23:39:53 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h> // para usar atoi

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main(int argc, char *argv[])
{
	if(argc < 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	char *dst = argv[1];
	const char *src = argv[2];
	// Convertir argv[3] (cadena) a un entero de tipo size_t
    size_t size = (size_t)atoi(argv[3]);

	printf("%zu", ft_strlcpy(dst, src, size));
	return (0);
}
*/

