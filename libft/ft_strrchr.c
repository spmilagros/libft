/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 19:06:17 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/21 21:48:15 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last_c;
	char		cast_c;

	i = 0;
	last_c = NULL;
	cast_c = (char) c;
	if (cast_c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i] != '\0')
	{
		if (s[i] == cast_c)
			last_c = s + i;
		i++;
	}
	if (last_c != NULL)
		return ((char *)last_c);
	return (NULL);
}
