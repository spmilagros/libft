/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:54:35 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/24 02:47:55 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main(void)
{
    int number;
    
    number = -15;
    char *number_str = ft_itoa(number);
    printf("Converted number: %s\n", number_str);
    free(number_str);
    return (0);
}