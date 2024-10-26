/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:46:03 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 16:16:38 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_dest;
	unsigned char	*cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n != '\0')
	{
		*cast_dest = *cast_src;
		cast_dest++;
		cast_src++;
		n--;
	}
	return (dest);
}
/*#include <stdio.h>

int	main()
{
	char	buffer_1[10] = "42Madrid";
	char	buffer_2[10] = "Hola";
	printf("%s\n", (char *)ft_memcpy(buffer_1, buffer_2, 4));
	return(0);
}*/