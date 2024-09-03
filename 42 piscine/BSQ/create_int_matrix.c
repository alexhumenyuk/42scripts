/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_int_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:00:02 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 05:13:38 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**create_int_matrix_malloc(int m, int n)
{
	int	**int_matrix;
	int	i;

	int_matrix = (int **)malloc(sizeof(int *) * (m + 1));
	if (!int_matrix)
		return (NULL);
	i = 0;
	while (i <= m)
	{
		int_matrix[i] = (int *)malloc(sizeof(int) * (n + 1));
		if (!int_matrix[i])
			return (NULL);
		i++;
	}
	return (int_matrix);
}

int	**get_int_matrix_malloc(char **matrix, int m, int n, char obstacle)
{
	int	**int_matrix;
	int	i;
	int	j;

	i = 0;
	int_matrix = create_int_matrix_malloc(m, n);
	while (i <= m && int_matrix != NULL)
	{
		j = 0;
		while (j <= n)
		{
			if (i == m || j == n)
				int_matrix[i][j] = 0;
			else
			{
				if (matrix[i][j] == obstacle)
					int_matrix[i][j] = 0;
				else
					int_matrix[i][j] = -1;
			}
			j++;
		}
		i++;
	}
	return (int_matrix);
}

void	free_int_matrix(int **int_matrix, int m)
{
	int		i;

	i = 0;
	while (i <= m)
	{
		free(int_matrix[i]);
		i++;
	}
	free(int_matrix);
}
