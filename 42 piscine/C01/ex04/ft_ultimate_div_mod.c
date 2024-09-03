/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:04:34 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/15 17:04:36 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*
int	main()
{
	int a = 6;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}
*/