/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:35:04 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/14 18:26:43 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (ft_strlen(str) + 1 - i)
	{
		if (str[i] == (unsigned char)ch)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
