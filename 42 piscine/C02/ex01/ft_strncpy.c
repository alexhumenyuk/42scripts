/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:31:06 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/19 21:31:09 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (i < n)
	{
		if (i >= src_len)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char			*src;
	char			dest[100];
	unsigned int	n;
	unsigned int	i;

	i = 0;
	src = "Hello world!";
	printf("%s\n", src);
	n = 20;
	while (i < n)
	{
		printf("Byte %d: ", i + 1);
		printf("%d\n", ft_strncpy(dest, src, n)[i]);
		i++;
	}
}
*/