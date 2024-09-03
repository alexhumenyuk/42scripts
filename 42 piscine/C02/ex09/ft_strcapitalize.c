/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:15:14 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/20 20:15:15 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && i > 0)
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
				str[i] = str[i] + 32;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "saLut, CoMmEnt tu vas ? 42Mots quarante-deux;
	 cinquante+et+un";

	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/