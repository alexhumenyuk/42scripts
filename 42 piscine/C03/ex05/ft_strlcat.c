/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 19:10:08 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/22 19:10:10 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest >= size)
		return (size + len_src);
	while (i < (size - len_dest - 1) && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

/*int	main(void)
{
	char	dest0[20] = "Hello";
	char	dest1[6] = "Hello";
	char	*src = " world!";

	printf("Dest 0: %d\n", ft_strlcat(dest0, src, sizeof(dest0)));
	printf("Dest 1: %d\n", ft_strlcat(dest1, src, sizeof(dest1)));
}*/