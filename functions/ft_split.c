/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 23:33:59 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/06/29 23:42:09 by pmoorthy         ###   ########.fr       */
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

char	**ft_split(const char *s, char c)
{
	char	**table;
	size_t	index;
	size_t	count;
	size_t	startpos;

	index = 0;
	count = 0;
	table = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!table)
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
			table[count] = ft_strndup(s + startpos, index - startpos);
			count++;
		}
	}
	table[count] = NULL;
	return (table);
}
