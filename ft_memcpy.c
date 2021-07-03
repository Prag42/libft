/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:41:58 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/05/27 01:21:06 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*srccast;
	char	*dstcast;
	size_t	i;

	srccast = (char *)src;
	dstcast = (char *)dst;
	i = 0;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		i++;
	}
	return (dst);
}
