/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:49:36 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 22:49:48 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*malloc_substr(size_t len)
{
	char	*substr;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	return (substr);
}

static size_t	substr_len(const char *s, unsigned int start, size_t len)
{
	size_t	actual_len;

	actual_len = ft_strlen(s);
	if (start >= actual_len)
		return (0);
	if (actual_len - start < len)
		len = actual_len - start;
	return (len);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	len = substr_len(s, start, len);
	substr = malloc_substr(len);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}