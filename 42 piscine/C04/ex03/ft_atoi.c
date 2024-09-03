/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:59:26 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/29 19:59:27 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("    ---+--+1234ab567"));
	return (0);
}*/
