/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 23:36:51 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/21 23:36:55 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		first_digit;
	int		sec_digit;
	char	hex_array[17];

	first_digit = 0;
	sec_digit = 0;
	ft_strcpy(hex_array, "0123456789abcdef");
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			first_digit = str[i] / 16;
			sec_digit = str[i] % 16;
			write(1, &hex_array[first_digit], 1);
			write(1, &hex_array[sec_digit], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}
*/