/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 14:59:09 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/14 18:13:03 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (i + len < n - 1 && src[i] != 0)
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = 0;
	if (n <= len)
		return (ft_strlen(src) + n);
	else
		return (ft_strlen(src) + len);
}
