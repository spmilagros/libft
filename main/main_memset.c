/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:54:12 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 01:10:49 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int main()
{
    char buffer[10];

    // Llenamos el buffer con el carácter 'A'
    ft_memset(buffer, 'A', 5);

    // Imprimimos el buffer
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);  // Debería imprimir: A A A A A A A A A A
    }

    return 0;
}