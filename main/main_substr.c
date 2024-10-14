/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:07:47 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 23:08:06 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
    const char *str = "Holaaa 42 Madrid";
    char *substr;

    substr = ft_substr(str, 7, 5);
    printf("Subcadena: %s\n", substr);
    free(substr);
    return (0);
}