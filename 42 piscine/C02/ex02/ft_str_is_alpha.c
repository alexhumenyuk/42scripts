/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:17:24 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/19 18:19:19 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
		{
			if (!('a' <= str[i] && str[i] <= 'z'))
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;
	char	*str1;
	char	*str2;

	str = "";
	str1 = "Holamundo";
	str2 = "Holamundo2";

	printf("%d\n", ft_str_is_alpha(str));
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	return (0);
}
*/