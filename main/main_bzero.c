/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:43:07 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 17:43:10 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	buffer[10];

	// Inicializamos el buffer con caracteres 'A'
	for (int i = 0; i < 10; i++)
		buffer[i] = 'A';

	// Llamamos a bzero para llenar los primeros 5 bytes con ceros
	ft_bzero(buffer, 5);

	// Imprimimos el contenido del buffer
	for (int i = 0; i < 10; i++)
	{
		if (buffer[i] == '\0')
			printf("0 ");
		else
			printf("%c ", buffer[i]);
	}
	return (0);
}