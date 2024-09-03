/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 00:00:31 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 03:40:04 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	*initialize_pos_array(void)
{
	int	pos[2];

	pos[0] = 0;
	pos[1] = 0;
	return (pos);
}

int	*save_ones_sq_pos(max_sq_pos)
{
	int	*ones_pos;

	ones_pos = max_sq_pos;
	return (ones_pos);
}

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
	while (i < sizeof(values_array))
	{
		if (values_array[i] < min_value)
			min_value = values_array[i];
	}
	return (min_value);
}

int	**solve_zero_int_matrix(char **matrix, int **int_matrix, int m, int n)
{
	int	i;
	int	j;

	i = m - 1;
	while (i >= 0)
	{
		j = n - 1;
		while (j >= 0)
		{
			if (matrix[i][j] == "o")
				int_matrix[i][j] = 0;
			j--;
		}
		i--;
	}
	return (int_matrix);
}

int	**solve_ones_int_matrix(char **matrix, int **int_matrix, int m, int n)
{
	int	i;
	int	j;
	int	*max_sq_pos;

	max_sq_pos = initialize_pos_array();
	i = m - 1;
	while (i >= 0)
	{
		j = n - 1;
		while (j >= 0)
		{
			if (matrix[i][j + 1] == "o" || matrix[i + 1][j] == "o"
				|| matrix[i + 1][j + 1] == "o")
			{
				int_matrix[i][j] = 1;
				max_sq_pos[0] = i;
				max_sq_pos[1] = j;
				save_max_sq_pos(max_sq_pos);
			}
			j--;
		}
		i--;
	}
	return (int_matrix);
}

int	**solve_int_matrix(char **matrix, int **int_matrix, int m, int n)
{
	int	i;
	int	j;

	i = m - 1;
	while (i >= 0)
	{
		j = n - 1;
		while (j >= 0)
		{
			if (matrix[i][j + 1] == "." && matrix[i + 1][j] == "."
			&& matrix[i + 1][j + 1] == ".")
				int_matrix[i][j] = get_min_value(int_matrix[i][j + 1],
						int_matrix[i + 1][j], int_matrix[i + 1][j + 1]) + 1;
			j--;
		}
		i--;
	}
	return (int_matrix);
}
*/
