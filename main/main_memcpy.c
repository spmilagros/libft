/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:46:49 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/24 00:27:13 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
    int src;
    int dest;

    src = 422;
    dest = 0;
    ft_memcpy(&dest, &src, sizeof (int));
    printf("Valor original (src): %d\n", src);
    printf("Valor copiado (dest): %d\n", dest);

    return 0;
}
