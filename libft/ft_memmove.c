/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:48:59 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/22 17:02:23 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cast_dest;
	const unsigned char	*cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (const unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (cast_src < cast_dest)
	{
		while (n--)
			cast_dest[n] = cast_src[n];
	}
	else
	{
		while (n--)
		{
			*cast_dest = *cast_src;
			cast_dest++;
			cast_src++;
		}
	}
	return (dest);
}
