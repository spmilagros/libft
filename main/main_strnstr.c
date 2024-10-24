/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:26:01 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/24 02:05:20 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        write(1, "Error", 5);
        return (1);
    }
    const char *s1 = argv[1];
    const char *s2 = argv[2];
    size_t n = atoi(argv[3]);

    char *result = ft_strnstr(s1, s2, n);
    
    if (result != NULL)
        printf("Subcadena encontrada: %s\n", result);
    else
        printf("Subcadena no encontrada.\n");
    
    return 0;
}