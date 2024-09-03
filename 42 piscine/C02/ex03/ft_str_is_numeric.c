/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:35:25 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/20 18:35:27 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (0);
			i++;
		}
		return (1);
	}
}
/*
int	main(void)
{
	char	*str = "2345";
	char	*str1 = "2 2";
	char	*str2 = "2a";
	char	*str3 = "";

	printf("%d\n", ft_str_is_numeric(str));
	printf("%d\n", ft_str_is_numeric(str1));
	printf("%d\n", ft_str_is_numeric(str2));
	printf("%d\n", ft_str_is_numeric(str3));
	return (0);
}
*/