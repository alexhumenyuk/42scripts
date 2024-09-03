/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 22:29:40 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/28 17:21:22 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> // ! Remove unnecessary lib and all the printfs

// ! read_file.c
char	*open_file_malloc(char *file_name);

// ! create_char_matrix.c
char	**get_char_matrix_malloc(char *file_str);
void	free_char_matrix(char **matrix);

// ! check_map.c
// int		is_valid_input(char *file_str);

// ! solve_ang.c
char	**solve_matrix(char **matrix, int **int_matrix, char fill);
int		get_matrix_col_count(char **matrix);
int		get_matrix_row_count(char **matrix);

// ! create_int_matrix.c
int		**get_int_matrix_malloc(char **matrix, int m, int n, char obstacle);
void	free_int_matrix(int **int_matrix, int m);

// !print.c
void	print_str(char *str);
void	print_matrix(char **matrix);
void	print_int_matrix(int **int_matrix, int m, int n);

int	main(int argc, char **argv)
{
	char	**matrix;
	char	*file_str;
	int		i;

	int	**int_matrix;
	int	m;
	int	n; //crear int	dims[2] y poner m en 0 y n en 1

	if (argc == 1)
		return (1); // TODO
	i = 1;
	while (i < argc)
	{
		file_str = open_file_malloc(argv[i]);
		if (0)//(!is_valid_input(file_str))
			write(1, "map error\n", 10);
		else
		{
			matrix = get_char_matrix_malloc(file_str/* + first_ln_len(file_str)*/);
			print_matrix(matrix);
			if (matrix != NULL)
			{
				m = get_matrix_row_count(matrix);
				n = get_matrix_col_count(matrix);
				int_matrix = get_int_matrix_malloc(matrix, m, n, 'o');
				if (int_matrix != NULL)
				{
					print_int_matrix(int_matrix, m, n);
					solve_matrix(matrix, int_matrix, 'x');
					free_int_matrix(int_matrix, m);
				}
				free_char_matrix(matrix);
			}
			free(file_str);
		}
		i++;
	}
}
