/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:48:04 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 14:55:03 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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

	printf("%d\n", ft_isalpha(c));
	return (0);
}*/