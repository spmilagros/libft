/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:03:24 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 14:53:55 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <unistd.h>

int	main (int argc, char *argv[])
{
	if (argc < 2)
	{
		write (1, "Error", 5);
		return (1);
	}
	char	c = argv[1][0];
	printf ("%d\n", ft_isalnum(c));
	return (0);
}*/