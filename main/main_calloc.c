/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:06:46 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 22:52:57 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Para printf
#include <stdlib.h> // para free

void	*ft_calloc(size_t nmemb, size_t size);

int main(void)
{
    int *array;
    int num_elements = 5;
    int i;

    array = (int *)ft_calloc(num_elements, sizeof(int));
    if (array == NULL)
    {
        printf("Error: No se pudo asignar memoria\n");
        return (1);
    }
    printf("Valores del array inicializados a cero:\n");
    for (i = 0; i < num_elements; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
    free(array);
    return (0);
}
