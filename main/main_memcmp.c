/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:06:20 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/28 12:04:28 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		write(1,"Error\n", 6);
		return(1);
	}
	const void *s1 = argv[1];
    const void *s2 = argv[2];
    size_t n = atoi(argv[3]);

    printf("%d", ft_memcmp(s1, s2, n));
}