/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:20:10 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/20 19:20:11 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
			i++;
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	char	*str1;
	char	*str2;

	str = "HOLA";
	str1 = "";
	str2 = "hola";
	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	return (0);
}
*/