/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:55:07 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/11 23:50:19 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	cast_c;

	cast_c = (unsigned char)c;
	if (cast_c >= 'A' && cast_c <= 'Z')
	{
		return (cast_c + 32);
	}
	return (c);
}
