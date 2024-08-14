/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:25:49 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/10 17:25:55 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	curr_int;

	curr_int = '0';
	while (curr_int <= '9')
	{
		write(1, &curr_int, 1);
		curr_int = curr_int + 1;
	}
}

int main()
{
    ft_print_numbers();
    return(0);
}
