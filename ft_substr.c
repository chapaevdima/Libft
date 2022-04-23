/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:42:22 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/15 17:28:30 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (!s)
		return (0);
	if (ft_strlen(s) < start || len <= 0)
	{
		sub = (char *)malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	if (ft_strlen(s) >= len + start)
		sub = (char *)malloc(len * sizeof(char) + 1);
	else
		sub = (char *)malloc(ft_strlen(s) - start + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && i + start <= ft_strlen(s))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
