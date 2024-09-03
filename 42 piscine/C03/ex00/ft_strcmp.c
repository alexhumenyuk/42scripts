/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:01:40 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/22 13:01:44 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		res = s1[i] - s2[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	*s1 = "Hello world!";
	char	*s2_0 = "Hello world!";
	char	*s2_1 = "Hello world";
	char	*s2_2 = "Hello world!!";

	printf("%d\n", ft_strcmp(s1, s2_0));
	printf("%d\n", ft_strcmp(s1, s2_1));
	printf("%d\n", ft_strcmp(s1, s2_2));
}*/