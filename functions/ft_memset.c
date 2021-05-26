/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:35:22 by prag              #+#    #+#             */
/*   Updated: 2021/05/27 00:19:27 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)str;
	while (i < len)
	{
		p[k] = c;
		i++;
	}
	return (str);
}
