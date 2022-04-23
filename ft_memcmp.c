/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:10:23 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/14 18:11:35 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buffer1, const void *buffer2, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (((unsigned char *)buffer1)[i] != ((unsigned char *)buffer2)[i])
			return (((unsigned char *)buffer1)[i] -
			((unsigned char *)buffer2)[i]);
		i++;
	}
	return (0);
}
