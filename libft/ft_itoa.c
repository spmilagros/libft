/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:54:18 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/08 17:59:55 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		num;
	char	*str;

	i = 1;
	num = n;
	if (n < 0)
		num = -n;
	while (num / 10 != 0)
	{
		num = num / 10;
		i++;
	}
	if (n < 0)
		i++;
	str = (char *)malloc(i + 1);
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
