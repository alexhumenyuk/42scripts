/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:35:56 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/19 17:36:00 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	i;

	count = 0;
	while (count <= size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i = i + 1;
		}
		count = count + 1;
	}
}
/*
int	main()
{
	int	tab[] = {9, 1, 5, 7, 2};
	int	i;
	int	size;

	size = 5;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i <= size)
	{
		printf("%d", tab[i]);
		i = i + 1;
	}
}
*/
