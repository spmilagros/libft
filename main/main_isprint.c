/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:31:01 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/20 15:41:13 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isprint(int c);

int	main (int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	char	c = argv[1][0];
	printf ("%d", ft_isprint(c));
	return (0);

}
