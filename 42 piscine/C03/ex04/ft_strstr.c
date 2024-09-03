/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahumenyu <ahumenyu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:14:06 by ahumenyu          #+#    #+#             */
/*   Updated: 2024/08/22 16:14:09 by ahumenyu         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	int				diff;
	unsigned int	len_needle;
	unsigned int	len_haystack;

	len_needle = ft_strlen(to_find);
	if (len_needle == 0)
		return (str);
	i = 0;
	diff = 0;
	len_haystack = ft_strlen(str);
	if (len_needle <= len_haystack)
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
			{
				diff = ft_strncmp(&str[i], to_find, len_needle);
				if (diff == 0)
					return (&str[i]);
			}
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	*needle0 = "lo w";
	char	*needle1 = "llo w";
	char	*needle2 = "2";
	char	*needle3 = "";
	char	*needle4 = "Hello @world!!!";
	char	*haystack = "Hello @world!";
	char	*result;

    result = ft_strstr(haystack, needle0);
    if (result)
        printf("%s\n", result);
    else
        printf("There is no needle in the haystack\n");

    result = ft_strstr(haystack, needle1);
    if (result)
        printf("%s\n", result);
    else
        printf("There is no needle in the haystack\n");

    result = ft_strstr(haystack, needle2);
    if (result)
        printf("%s\n", result);
    else
        printf("There is no needle in the haystack\n");

    result = ft_strstr(haystack, needle3);
    if (result)
        printf("%s\n", result);
    else
        printf("There is no needle in the haystack\n");

    result = ft_strstr(haystack, needle4);
    if (result)
        printf("%s\n", result);
    else
        printf("There is no needle in the haystack\n");
    return (0);
}
*/
