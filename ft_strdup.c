/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:09:09 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/14 17:31:08 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *str)
{
	int		len;
	char	*res;

	len = ft_strlen(str) + 1;
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (0);
	while (len >= 0)
	{
		len --;
		res[len] = str[len];
	}
	return (res);
}
