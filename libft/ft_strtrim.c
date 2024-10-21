/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:51:10 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/14 23:50:43 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_trim_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && char_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	ft_trim_end(const char *s1, const char *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && char_in_set(s1[end - 1], set))
		end--;
	return (end);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = ft_trim_start(s1, set);
	end = ft_trim_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trimmed_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 1);
	return (trimmed_str);
}
