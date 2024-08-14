/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:42:11 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/10 15:42:17 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		digit = nb % 10 + '0';
		write(1, &digit, 1);
	}
}

int main()
{
   ft_putnbr(2147483647);
   write(1, "\n", 1);
   ft_putnbr(-2147483648);
   write(1, "\n", 1);
   ft_putnbr(42);
   write(1, "\n", 1);
   ft_putnbr(-42);
   write(1, "\n", 1);
   ft_putnbr(424242);
   write(1, "\n", 1);
   ft_putnbr(0);
}
