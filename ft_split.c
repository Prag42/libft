/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 23:33:59 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/07/03 17:25:19 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	size_t	index;
	size_t	words;

	index = 0;
	words = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		if (s[index] != '\0')
			words++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (words);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	index;

	if (!src && !dst)
		return (0);
	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dst[index] = src[index];
		++index;
	}
	while (index < n)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	index;
	size_t	count;
	size_t	startpos;

	index = 0;
	count = 0;
	array = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!array)
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		startpos = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > startpos)
		{
			array[count] = ft_strndup(s + startpos, index - startpos);
			count++;
		}
	}
	array[count] = NULL;
	return (array);
}
