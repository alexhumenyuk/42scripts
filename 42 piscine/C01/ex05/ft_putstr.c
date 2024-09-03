/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:39:10 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/15 17:40:57 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i = i + 1;
	}
}
/*
int	main()
{
	char	*str;

	str = "Hello world!";
	//printf("\n%p\n", str);
	//printf("%p\n", &"Hello world!");
	ft_putstr(str);
}
*/