/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 23:05:45 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/11 23:07:41 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	char	i;

	letter = 'z';
	i = 0;
	while (i < 26)
	{
		write(1, &letter, 1);
		letter = letter - 1;
		i = i + 1;
	}
}

int main()
{
	ft_print_reverse_alphabet();
}

