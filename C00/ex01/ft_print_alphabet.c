/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:49:40 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/08 21:39:50 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	curr_letter;

	curr_letter = 'a';
	while (curr_letter <= 'z')
	{
		write(1, &curr_letter, 1);
		curr_letter = curr_letter + 1;
	}
}

int main()
{	
	ft_print_alphabet();
	return(0);
}
