/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:46:03 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/24 00:27:11 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_dest;
	unsigned char	*cast_src;

	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n != 0)
	{
		*cast_dest = *cast_src;
		cast_dest++;
		cast_src++;
		n--;
	}
	return (dest);
}
