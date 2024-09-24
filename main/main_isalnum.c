/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:20:07 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/19 16:38:46 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum (int c);

int	main (int argc, char *argv[])
{
	if (argc < 2)
	{
		write (1, "Error", 5);
		return (1);
	}
	char	c = argv[1][0];
	printf ("%d", ft_isalnum(c));
	return (0);
}
