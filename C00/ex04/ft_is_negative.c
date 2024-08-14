/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:31:55 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/10 17:31:58 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

int main ()
{
   ft_is_negative(-1);
   write(1, "\n", 1);
   ft_is_negative(1);
   write(1, "\n", 1);
   ft_is_negative(0);
   return(0);
}
