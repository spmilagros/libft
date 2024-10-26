/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:49:55 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 16:51:55 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cast_s;
	unsigned char	cast_c;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	while (n != 0)
	{
		*cast_s = cast_c;
		cast_s++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>

int	main()
{
	char	buffer_1[15] = "42Madrid";

	printf("%s\n", (char *)ft_memset(buffer_1, 99, 3));
	return(0);
}*/