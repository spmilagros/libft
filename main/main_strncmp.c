/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:02:55 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/27 17:05:49 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n);

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

    printf("%d", ft_strncmp(s1, s2, n));
    //return (0);
}