/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:02:55 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 02:19:53 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

int main(void)
{
    const char *str1 = "Hola";
    const char *str2 = "Holo";
    int result;

    result = ft_strncmp(str1, str2, 4);
    printf(" %d\n", result);
    return (0);
}
