/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:06:17 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 23:50:14 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last_c;

	i = 0;
	last_c = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_c = s + i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last_c != NULL)
		return ((char *)last_c);
	return (NULL);
}