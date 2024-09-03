/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:24:04 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/11 17:24:11 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combs(char *main_array, char *max_array, int n)
{
	int	pos;

	while (1)
	{
		write(1, main_array, n);
		if (main_array[0] == max_array[0])
			break ;
		write(1, ", ", 2);
		pos = n - 1;
		while (main_array[pos] == max_array[pos])
			pos--;
		main_array[pos]++;
		pos++;
		while (pos < n)
		{
			main_array[pos] = main_array[pos - 1] + 1;
			pos++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	main_array[9];
	char	max_array[9];
	int		i;

	i = 0;
	while (i < n)
	{
		main_array[i] = i + '0';
		max_array[i] = 10 - n + i + '0';
		i++;
	}
	ft_print_combs(main_array, max_array, n);
}

int	main()
{
	ft_print_combn(1);
	write(1, "\n\n", 2);
	ft_print_combn(2);
	write(1, "\n\n", 2);
	ft_print_combn(3);
	write(1, "\n\n", 2);
	ft_print_combn(4);
	write(1, "\n\n", 2);
	ft_print_combn(5);
	write(1, "\n\n", 2);
	ft_print_combn(9);
	write(1, "\n\n", 2);
}