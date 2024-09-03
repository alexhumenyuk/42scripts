/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:31:45 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/15 16:31:48 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	div;
	int	mod;
	
	div = 0;
	mod = 0;
	ft_div_mod(6, 2, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
}
*/