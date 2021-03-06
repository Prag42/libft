/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 18:08:27 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/06/24 18:14:28 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum (int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)) == 1)
	{
		return (1);
	}
	else
		return (0);
}
