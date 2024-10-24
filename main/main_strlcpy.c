/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:56:37 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/24 00:55:55 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int main(void)
{
	char *src;
	char dst[6];
	size_t size;
	size_t result;
	
	src = "42Madrid";
	size = sizeof(dst);
	result = ft_strlcpy(dst, src, size);
	printf("Cadena copiada: %s\n", dst);
	printf("Longitud de la cadena original: %zu\n", result);
	return (0);
}
