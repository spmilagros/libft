/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:06:51 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 22:31:42 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s);

int main(void)
{
	const char *original = "Holaaaaa, ya quiero pasar la libft!";
	char *duplicate;

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}

	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicate);

	free(duplicate);
	return (0);
}