/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:45:41 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/14 20:44:52 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	if (str2[0] == 0)
	{
		return ((char *)str1);
	}
	while ((unsigned)i < (unsigned)n && i < (int)ft_strlen(str1))
	{
		while (str1[i + c] == str2[c] && (unsigned)(i + c) < (unsigned)n &&
			str2[c] != 0)
			c++;
		if (str2[c] == 0)
			return ((char *)(str1 + i));
		c = 0;
		i++;
	}
	return (0);
}
