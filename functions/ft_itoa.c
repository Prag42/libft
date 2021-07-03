/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 22:28:22 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/07/03 20:33:57 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(long n, int sign)
{
	int	len;

	len = 0;
	if (sign < 0)
		len = 1;
	if (n == 0)
		len += 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int				i;
	int				sign;
	char			*hold;
	long			num;

	sign = 1;
	num = (long)n;
	if (num < 0)
		sign *= -1;
	num *= sign;
	i = ft_numlen(num, sign);
	hold = ft_calloc(i + 1, 1);
	if (!hold)
		return (NULL);
	if (sign < 0)
		hold[0] = '-';
	if (n == 0)
		hold[0] = '0';
	while (num)
	{
		hold[i-- - 1] = '0' + (num % 10);
		num /= 10;
	}
	return (hold);
}
