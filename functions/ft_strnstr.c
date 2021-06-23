/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 18:25:51 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/05/28 00:01:33 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < n && str1[i] != '\0')
	{
		j = 0;
		while (i + j < n && str1[i + j] == str2[j] && str2[j] != '\0')
		{
			j++;
			if (str2[j] == '\0')
				return ((char *)str1 + i);
			i++;
		}
	}
	return (NULL);
}
