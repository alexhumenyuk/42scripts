/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:32:37 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/28 17:07:28y capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/*
int	get_file_bytes_count(char *file_name)
{
	char	*reading_buffer;
	int		l;
	int		bytes_read;
	int		file_descript;

	reading_buffer = (char *)malloc(sizeof(char) * 1);
	if (!reading_buffer)
		return (-1);
	file_descript = open(file_name, O_RDONLY);
	if (file_descript == -1)
	// Memory leak de reading_buffer si file_descript es -1, se deberia hacer free pero esto aumenta la cantidad de lineas
		return (-1);
	bytes_read = read(file_descript, reading_buffer, 1);
	l = 0;
	while (bytes_read > 0)
	{
		l++;
		bytes_read = read(file_descript, reading_buffer, 1);
	}
	free(reading_buffer);
	close(file_descript);
	if (bytes_read == -1)
		return (-1);
	return (l);
}
*/
char	*file_str_cat_malloc(char *before, char c, unsigned int l)
{
	char			*new;
	unsigned int	i;

	new = (char *)malloc(sizeof(char) * (l + 1));
	i = 0;
	while (before[i] != 0)
	{
		new[i] = before[i];
		i++;
	}
	free(before);
	new[i] = c;
	new[i + 1] = 0;
	return (new);
}

char	*get_file_str_malloc(int file_descript)
{
	char			reading_buffer[1];
	unsigned int	l;
	int				bytes_read;
	char			*file_str;

	bytes_read = read(file_descript, reading_buffer, 1);
	if (bytes_read == -1)
		return (NULL);
	file_str = (char *)malloc(sizeof(char) * 2);
	file_str[0] = reading_buffer[0];
	file_str[1] = 0;
	l = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(file_descript, reading_buffer, 1);
		file_str = file_str_cat_malloc(file_str, reading_buffer[0], l + 1);
		l++;
	}
	file_str[l - 1] = 0;
	if (bytes_read == -1)
	{
		free(file_str);
		return (NULL);
	}
	return (file_str);
}

char	*open_file_malloc(char *file_name)
{
	int		file_descript;
	char	*file_str;

	file_descript = open(file_name, O_RDONLY);
	if (file_descript == -1)
		return (NULL);
	file_str = get_file_str_malloc(file_descript);
	close(file_descript);
	return (file_str);
}
