/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:14:52 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/27 14:20:51 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result_str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result_str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result_str[i] = f(i, s[i]);
		i++;
	}
	result_str[i] = '\0';
	return (result_str);
}
/*#include <stdio.h>
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char	toupper_2(unsigned int i, char c)
{
	(void) i;
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
--char f(unsigned int i, char c)
{
	i = 0;
	char str[i];
	str[i] = c + 1;
	return (str[i]);
}--
int	main()
{
	char str1[] = "abs";
	char *str2;
	str2 = ft_strmapi(str1, *toupper_2);
	printf("%s\n", str2);
}*/