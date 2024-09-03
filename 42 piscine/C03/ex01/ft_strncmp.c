/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 13:54:49 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/22 13:54:52 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		res = s1[i] - s2[i];
		if (res != 0)
			return (res);
		i++;
	}
	return (res);
}

/*int	main(void)
{
	unsigned int	n;
	char			*s1 = "Hello world!";
	char			*s2_0 = "Hello world!";
	char			*s2_1 = "Hell0 world!";
	char			*s2_2 = "Hellz world!!";

	n = 5;
	printf("%d\n", ft_strncmp(s1, s2_0, n));
	printf("%d\n", ft_strncmp(s1, s2_1, n));
	printf("%d\n", ft_strncmp(s1, s2_2, n));
}*/
