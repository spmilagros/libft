/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:14:52 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 19:41:14 by milsalin         ###   ########.fr       */
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
#include <stdio.h>

void	ft_putchar_fdd(unsigned int fd, char *c)
{
	(void) fd;
	write(1, c, 1);
}

int	main()
{
	ft_strmapi("Hola42\n", ft_putchar_fdd);
	return(0);
}