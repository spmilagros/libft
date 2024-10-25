/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:31:45 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/26 15:02:58 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verify_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static size_t	ft_count_numbers(int n)
{
	size_t	num_count;

	num_count = ft_verify_sign(n);
	while (n != 0)
	{
		n /= 10;
		num_count++;
	}
	return (num_count);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num_length;
	int		sign;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	num_length = ft_count_numbers(n);
	str = (char *)malloc(num_length + 1);
	if (!str)
		return (NULL);
	str[num_length] = '\0';
	sign = ft_verify_sign(n);
	if (sign)
		n = -n;
	while (num_length != 0)
	{
		str[num_length - 1] = (n % 10) + '0';
		n /= 10;
		num_length--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
/*int	main()
{
	int	n = 34;

	printf("%s\n", ft_itoa(n));
	return (0);
}*/