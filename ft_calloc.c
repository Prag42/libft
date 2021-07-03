/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:47:15 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/06/24 19:13:17 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	 void	*set;

	set = malloc(count * size);
	if (set == NULL)
		return (set);
	ft_bzero(set, size * count);
	return (set);
}
