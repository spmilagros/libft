/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa - v1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:54:18 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/06 23:04:10 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int	i;
	int	num;

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
		char	*str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	
	// Esta línea se puede acortar con: 
	/* 
	if (n < 0)
		num = -n;
	else
		num = n;
	*/

	while (num > 0)
	{
		str[--i] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// otra version

#include <stdlib.h>

int	ft_num_len(int n)
{
	int len = 1;
	int num = n;

	if (n < 0)
		num = -n;
	while (num / 10 != 0)
	{
		num /= 10;
		len++;
	}
	if (n < 0)
		len++; // Para el signo negativo
	return (len);
}

char	*ft_convert_to_str(char *str, int num, int i)
{
	while (num > 0)
	{
		str[--i] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		num;
	char	*str;

	i = ft_num_len(n);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	num = (n < 0) ? -n : n;
	str = ft_convert_to_str(str, num, i);
	if (n < 0)
		str[0] = '-';
	return (str);
}
