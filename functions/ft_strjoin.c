/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoorthy <pmoorthy@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:58:31 by pmoorthy          #+#    #+#             */
/*   Updated: 2021/07/03 14:25:46 by pmoorthy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		slen1;
	int		slen2;
	char	*str;

	if (!s1)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (slen1 + slen2 + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		str[i] = s1[i];
	}
	i = -1;
	while (s2[++i])
	{
		str[slen1] = s2[i];
		slen1++;
	}
	str[slen1] = '\0';
	return (str);
}
