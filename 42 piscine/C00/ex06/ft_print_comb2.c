/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:37:38 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/10 18:37:50 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			write(1, " ", 1);
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			if (n1 != 98 || n2 != 99)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

int main() {
   ft_print_comb2();
   return (0);
}
