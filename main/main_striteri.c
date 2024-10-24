/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:16:44 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/22 23:06:32 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(unsigned int c, char *ptr)
{
	(void) ptr;
	write(1, &c, 1);
}

int main(void)
{
	char str[] = "hola 42";

	ft_striteri(str, ft_putchar_fd);
	printf("Resultado: %s\n", str);
	return (0);
}