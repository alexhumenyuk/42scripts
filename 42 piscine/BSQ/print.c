/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:07:56 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 16:55:48 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_matrix(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	while (matrix[i] != 0)
	{
		j = 0;
		while (matrix[i][j] != 0)
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	print_int_matrix(int **int_matrix, int m, int n)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i <= m)
	{
		j = 0;
		while (j <= n)
		{
			c = int_matrix[i][j] + '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

