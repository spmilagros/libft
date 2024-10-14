/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:42:06 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 22:42:20 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //write
#include <stdlib.h> //malloc y free
#include <stddef.h> //size_t

void	*ft_memchr(const void *s, int c, size_t n);

unsigned int	ft_atoi(const char *buffer_size)
{
	unsigned int	result;

	result = 0;
	while (*buffer_size >= '0' && *buffer_size <= '9')
	{
		result = result * 10 + (*buffer_size - '0');
		buffer_size++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	char			*buffer;
	size_t			n;
	char			find_char;
	char			*result;
	const void		*cast_s;

	if (argc < 4)
	{
		write(1, "error\n", 6);
		return (1);
	}
	cast_s = argv[1];
	n = (size_t)ft_atoi(argv[3]);
	buffer = (char *)malloc(n + 1);
	if (!buffer)
	{
		write(1, "error, no se pudo asignar bloque de memoria\n", 44);
		return (1);
	}
	find_char = argv[2][0];		
	result = ft_memchr(cast_s, find_char, n);
	if (result == NULL)
	{
		write(1, "No se encontró el caracter\n", 28);
	}
	else
	{
		write(1, "Se encontró la consulta: ", 26);
		write(1, &find_char, 1);
		write(1, " estaba dentro de los primeros ", 31);
		write(1, (char[]){(char)(n + '0'), 0}, 1); //revisar en la chuleta
		write(1, " caracteres\n", 12);
	}
	free(buffer);
	return (0);
}