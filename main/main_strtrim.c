/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:08:57 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/24 02:43:47 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

int main(void)
{
	const char	*str1;
	const char	*set;
	char 		*trimmed;

	str1 = "   Hola, 42 Madrid!   ";
	set = " ";
	trimmed = ft_strtrim(str1, set);
	if (trimmed)
	{
		printf("Original: '%s'\n", str1);
		printf("Cortada: '%s'\n", trimmed);
		free(trimmed);
	}
	else
		printf("Error al cortar la cadena.\n");
	return (0);
}