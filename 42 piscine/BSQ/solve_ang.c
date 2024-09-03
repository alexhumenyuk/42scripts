/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_ang.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 01:24:44 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 08:12:42 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_matrix(char **matrix);

int		get_matrix_col_count(char **matrix);

int		get_matrix_row_count(char **matrix);

int	get_min_value(int n1, int n2, int n3)
{
	int	min_value;
	int	values_array[3];
	int	i;

	values_array[0] = n1;
	values_array[1] = n2;
	values_array[2] = n3;
	min_value = values_array[0];
	i = 1;
	while (i < 3)
	{
		if (values_array[i] < min_value)
			min_value = values_array[i];
		i++;
	}
	return (min_value);
}

void	solve_int_matrix(int **int_matrix, int m, int n, int *coords)
{
	int	i;
	int	j;

	coords[0] = m - 1;
	coords[1] = n - 1;
	i = m - 1;
	while (i >= 0)
	{
		j = n - 1;
		while (j >= 0)
		{
			if (int_matrix[i][j] == -1)
			{
				int_matrix[i][j] = 1 + get_min_value(int_matrix[i + 1][j + 1],
						int_matrix[i][j + 1], int_matrix[i + 1][j]);
				if (int_matrix[i][j] >= int_matrix[coords[0]][coords[1]])
				{
					coords[0] = i;
					coords[1] = j;
				}
			}
			j--;
		}
		i--;
	}
}

void	fill_char_matrix(char **matrix, int *coords, int value, char fill)
{
	int	i;
	int	j;

	i = coords[0];
	while (i < coords[0] + value)
	{
		j = coords[1];
		while (j < coords[1] + value)
		{
			matrix[i][j] = fill;
			j++;
		}
		i++;
	}
}

char	**solve_matrix(char **matrix, int **int_matrix, char fill)
{
	int	coords[2];
	int	m;
	int	n;

	m = get_matrix_row_count(matrix);
	n = get_matrix_col_count(matrix);
	solve_int_matrix(int_matrix, m, n, coords);
	fill_char_matrix(matrix, coords, int_matrix[coords[0]][coords[1]], fill);
	// ! Probably the next line can be in another line, idk
	print_matrix(matrix);
	return (matrix);
}
