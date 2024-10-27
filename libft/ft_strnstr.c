/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:25:53 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/27 14:53:48 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while ((big[i] != '\0') && (i < len))
	{
		if (big[i] == little[0])
		{
			j = 0;
			while ((little[j] != '\0') && (i + j < len)
				&& (big[i + j] == little[j]))
				j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main()
{
	char	*big = "Domingoxxxxxxx";
	char	*little = "ngo";

	printf("%s", ft_strnstr(big, little, 8));
	return (0);
}*/