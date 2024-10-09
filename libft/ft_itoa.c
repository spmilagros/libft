/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:54:18 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/09 19:43:27 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t word_count(int n)
{
	size_t	count;
	
	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		count = 1;
		n *= -1;
	}
	while (n != 0)
	{
		n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int i;
	int num;
	char *str;
	size_t len;

	i = 1;
	num = n;
	
	str = (char *)malloc(len + 1) * sizeof(char *);
	len = ft_strlen(str);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		num = -n;
	else
		num = n;
	while (num > 0)
	{
		str[--i] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
