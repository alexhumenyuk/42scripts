/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:11:12 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/15 20:11:15 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	rev_count;

	i = 0;
	rev_count = size - 1;
	while (i < rev_count)
	{
		temp = tab[i];
		tab[i] = tab[rev_count];
		tab[rev_count] = temp;
		i = i + 1;
		rev_count = rev_count - 1;
	}
}
/*
int	main()
{
	int	tab[] = {0, 1, 2, 3, 4, 5, 6};
	int	size;
	int	i;

	size = 7;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i = i + 1;
	}
	return (0);
}
*/