/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:04 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 23:50:23 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	cast_c;

	cast_c = (unsigned char)c;
	if (cast_c >= 'a' && cast_c <= 'z')
	{
		return (cast_c - 32);
	}
	return (c);
}
