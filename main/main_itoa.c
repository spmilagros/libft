/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:54:35 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/06 23:24:48 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>

int	ft_itoa(const char *nptr);

int	main(int argc, char *argv[])
{
	if(argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	char *str = argv[1];
	printf("%d", ft_itoa(str));
	return (0);
}*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> // Para atoi
#include <string.h> // Para usar strlen

char	*ft_itoa(int n);  // Prototipo de la función ft_itoa

int	main(int argc, char *argv[])
{
	if (argc != 2) // Esperamos exactamente un argumento
	{
		write(1, "Error: Se necesita un número entero\n", 37);
		return (1);
	}

	int num = atoi(argv[1]);  // Convertir el argumento a entero
	char *str = ft_itoa(num); // Llamar a ft_itoa para convertir el entero a cadena

	if (str == NULL)  // Verificar si hubo un error en la asignación de memoria
	{
		write(1, "Error: Fallo en la asignación de memoria\n", 42);
		return (1);
	}

	printf("Número: %d, Cadena: %s\n", num, str);  // Imprimir el número y su representación en cadena
	free(str);  // Liberar la memoria asignada por ft_itoa

	return (0);
}