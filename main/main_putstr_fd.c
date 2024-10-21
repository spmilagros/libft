/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:24:35 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/16 00:26:38 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // Para close()

void	ft_putstr_fd(char *s, int fd);

int main(void)
{
	ft_putstr_fd("Hola42\n", 1)
	return (0);
}
