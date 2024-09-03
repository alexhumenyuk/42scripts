/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_column_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:09:15 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 08:10:08 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_col_count(char *file_str)
{
	int	count;

	count = 0;
	while (file_str[count] != '\n' && file_str[count] != 0)
		count++;
	return (count);
}

int	get_row_count(char *file_str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (file_str[i] != 0)
	{
		if (file_str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int	get_matrix_col_count(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[0][i] != 0)
		i++;
	return (i);
}

int	get_matrix_row_count(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i] != 0)
		i++;
	return (i);
}
