/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:59:04 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 14:56:16 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
#include <unistd.h>

int	main(int argc,char *argv[])
{
	if (argc < 2)
	{
		write (1, "Error", 5);
		return (1);
	}
	char	c = argv[1][0];

	printf("%d\n", ft_isascii(c));
	return (0);
}*/