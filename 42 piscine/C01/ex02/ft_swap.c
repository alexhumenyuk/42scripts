/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:54 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/15 16:26:56 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
	int a;
	int b;

	a = 4;
	b = 2;
	ft_swap(&a, &b);
	a = a + '0';
	b = b + '0';
	write(1, "a: ", 3);
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, "b: ", 3);
	write(1, &b, 1);
}
*/
