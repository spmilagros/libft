/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:45:10 by milsalin          #+#    #+#             */
/*   Updated: 2024/09/19 14:58:33 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isdigit (int c);

int	main (int argc, char *argv[])
{
	if (argc < 2)
	{
		write (1, "Error", 5);
		return (1);
	}
	char	c = argv[1][0];
	printf ("%d", ft_isdigit(c));
	return (0);
}
