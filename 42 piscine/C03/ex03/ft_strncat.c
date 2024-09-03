/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:03:39 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/22 15:03:42 by ahumenyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	unsigned int	n;
	char			s1[20];
	char			*s2 = " world!";

	n = 2;
	ft_strcpy(s1, "Hello");
	printf("dest: %s\n", s1);
	printf("src: %s\n", s2);
	printf("New dest: %s\n", ft_strncat(s1, s2, n));
}*/
