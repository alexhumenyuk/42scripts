/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: capibaras <migugar2@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:08:11 by migugar2          #+#    #+#             */
/*   Updated: 2024/08/27 18:14:21 by capibaras        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	a;
	int	num;
	int	i;

	i = 0;
	a = 1;
	num = 0;
	while ((((str[i] >= 9) && (str[i] <= 13)) || (str[i] == ' ')) && (str[i] != '\0'))
		i++;
	while (((str[i] == '+') || (str[i] == '-')) && (str[i] != '\0'))
	{
		if (str[i] == '-')
			a = (-1) * a;
		i++;
	}
	while ((str[i] <= '9') && (str[i] >= '0') && (str[i] != '\0'))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (a * num);
}
int	first_ln_len(char *file_str)
{
	int	frst_len;

	frst_len = 0;
	while (file_str[frst_len] != '\n')
		frst_len++;
	if (frst_len < 4)
		return(0); //! if (!first_ln_len) en is_valid_input
	return (frst_len);
}

int	*ex_chrs(char *file_str, int frst_len)
{
	int		i;
	char	*ex_chars[3];

	i = 0;
	while (i < frst_len)
	{
		if (i == frst_len - 1)
		{
			if (file_str[i - 2] == file_str[i - 1] || file_str[i - 2]
				== file_str[i] || file_str[i - 1] == file_str[i])
				return (NULL); //! if (!ex_chars) en is_valid_input
		}
		if (i >= frst_len - 3)
			ex_chars[i - frst_len + 3] = file_str[i];
		i++;
	}
	return (ex_chars);
}

int	get_m(char *file_str, int frst_len, int m_row_count) // ! Último input es llamar a la función get_row...
{
	int		i;
	int		m;
	char	*m_str;

	i = 0;
	m = 0;
	m_str = (char *)malloc((frst_len - 2) * sizeof(char));
	if (!m_str)
		return (0); // ! manage this return
	while (i < frst_len - 3)
	{
		m_str[i] = file_str[i];
		i++;
	}
	m_str[i] = '\0';
	m = ft_atoi(m_str);
	free(m_str);
	if (m != m_row_count)
		return (0);
	return (m); // ! use this m to compare it with the m obtained from counting "\n"; if != -> map error
}

int	check_chars_in_str(char *file_str, int *chars) // ! 2º input es el resultado de la ft ex_chars
{
	int	i;

	i = 0;
	while (file_str[i] != '\0')
	{
		if (file_str[i] != chars[0] || file_str[i] != chars[1]
			|| file_str[i] != chars[2])
			return (1); // ! manage this return
	}
	return (0);
}

// TODO
// Rn only check if the file str is not NULL
int	is_valid_input(char *file_str)
{
	if (!file_str)
		return (0);
	// TODO: else if (is wrong) free (file_str) && return (0);
	return (1);
}
