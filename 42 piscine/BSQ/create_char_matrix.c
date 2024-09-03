/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_char_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:22:32 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 17:01:32 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_col_count(char *file_str);
int	get_row_count(char *file_str);

char	**create_char_matrix_malloc(int m, int n)
{
	char	**matrix;
	int		i;

	matrix = (char **)malloc(sizeof(char *) * (m + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < m)
	{
		matrix[i] = (char *)malloc(sizeof(char) * (n + 1));
		if (!matrix[i])
			return (NULL);
		matrix[i][n] = 0;
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}

char	**get_char_matrix_malloc(char *file_str)
{
	char	**matrix;
	int		m;
	int		n;
	int		i;
	int		j;

	m = get_row_count(file_str);
	n = get_col_count(file_str);
	matrix = create_char_matrix_malloc(m, n);
	i = 0;
	while (i < m && matrix != NULL)
	{
		j = 0;
		while (j < n)
		{
			matrix[i][j] = file_str[0];
			file_str++;
			j++;
		}
		file_str++;
		i++;
	}
	return (matrix);
}

void	free_char_matrix(char **matrix)
{
	int		i;

	i = 0;
	while (matrix[i] != 0)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix[i]);
	free(matrix);
}
