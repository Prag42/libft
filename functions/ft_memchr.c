/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 03:38:22 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/05/27 13:53:32 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	strcast = (unsigned char *)str;
	ccast = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (strcast[i] == ccast)
			return (*str[i]);
		i++;
	}
	return (NULL);
}
