/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:06:41 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/16 19:23:27 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cast_c;

	i = 0;
	cast_c = (int)c;
	if (c == '\0')
		return ((char *)(s + ft_strlen(short)));
	while (s[i] != '\0')
	{
		if (s[i] == cast_c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
