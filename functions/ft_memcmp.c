/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 20:31:28 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/05/26 21:33:26 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*cast1;
	char	*cast2;

	i = 0;
	cast1 = (char *)s1;
	cast2 = (char *)s2;
	while (i < n)
	{
		if (cast1[i] != cast2[i])
			return ((unsigned char)str1[i] - ((unsigned char)str2)[i]);
		i++;
	}
	return (0);
}
