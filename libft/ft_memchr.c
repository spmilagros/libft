/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:41:00 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 02:00:53 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cast_s;
	unsigned char		cast_c;

	cast_s = (const unsigned char *)s;
	cast_c = (unsigned char)c;
	while (n != 0)
	{
		if (*cast_s == cast_c)
		{
			return ((void *)cast_s);
		}
		cast_s++;
		n--;
	}
	return (NULL);
}
