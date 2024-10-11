/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:54:12 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 17:27:08 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
    char buffer[10];

    // Llenamos el buffer con el carácter 'A'
    ft_memset(buffer, 'A', 10);

    // Imprimimos el buffer
    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);  // Debería imprimir: A A A A A A A A A A
    }

    return 0;
}