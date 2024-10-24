/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:42:06 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 02:00:56 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	const char *str;
	char *result;

	str = "Hello, world!";
	result = ft_memchr(str, 'w', 13);
	if (result != NULL) {
		printf("Se encontró '%c' en la posición: %ld\n", *result, result - str);
	} else {
		printf("Carácter no encontrado.\n");
	}
	return (0);
}