/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:08:32 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 23:08:37 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // Para malloc y free

char	*ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	const char *str1 = "Hola, ";
	const char *str2 = "42!";
	char *result;

	result = ft_strjoin(str1, str2);
	if (result != NULL)
	{
		printf("Nuevo string: %s\n", result);
		free(result);
	}
	else
		printf("Error con malloc - no se pudo asignar.\n");
	return (0);
}