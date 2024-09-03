/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:26:31 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/20 19:26:33 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (!(str[i] >= 32 && str[i] <= 126))
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
	str2 = "ho\nla";
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	return (0);
}
*/