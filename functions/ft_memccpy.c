/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:53:01 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/07/03 16:06:34 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*srccast;
	char	*dstcast;
	size_t	i;

	srccast = (char *)src;
	dstcast = (char *)dest;
	i = 0;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		if ((unsigned char)srccast[i] == (unsigned char)c)
			return ((char *)dest + i + 1);
		i++;
	}
	return (NULL);
}
