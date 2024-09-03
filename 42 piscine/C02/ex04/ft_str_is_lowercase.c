/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:58:46 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/20 18:58:47 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
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

	str = "Hola mundo";
	str1 = "";
	str2 = "hola";
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	return (0);
}
*/