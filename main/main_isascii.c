/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsalin <milsalin@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:28:14 by milsalin          #+#    #+#             */
/*   Updated: 2024/10/23 01:23:43 by milsalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isascii(int c);

/*int	main(int argc, char *argv[])
{
	if(argc < 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	char *str = argv[1];
	int i = 0;

	while (str[i] != '\0')
	{
		if(!ft_isascii(str[i]))
		{
			printf("No es ASCII", str[1]);
			return (1);
		}
		i++;
	}

	printf("Todos son caracteres ASCII.\n");
	return (0);

}*/
int	main(int argc, char *argv[])
{
	if(argc < 2)
	{
		write(1, "Error\n", 6);
	}
	char	c = argv[1][0];

	printf("%d", ft_isascii(c));
	return (0);                                                                                   
}
