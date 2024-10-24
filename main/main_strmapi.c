/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:16:37 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/22 23:09:59 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strmapi(const char *s, char (*f)(unsigned int, char));

char ft_tolower(unsigned int index, char c)
{
	(void)	index;
	unsigned char	cast_c;

	cast_c = (unsigned char)c;
	if (cast_c >= 'A' && cast_c <= 'Z')
	{
		return (cast_c + 32);
	}
	return (c);
}

int main(void)
{
	const char *str = "HOLA MUNDO";
	char *result;
	
	result = ft_strmapi(str, ft_tolower);
	if (!result)
	{
		printf("Error al asignar memoria.\n");
	}
	else
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	return (0);
}