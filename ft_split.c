/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:31:10 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/18 15:45:54 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num(const char *str, char c)
{
	int	count;
	int	res;

	res = 0;
	if (!(str[0]))
		return (0);
	count = 0;
	while (str[count] && str[count] == c)
		count++;
	while (str[count])
	{
		if (str[count] == c)
		{
			res++;
			while (str[count] == c)
				count++;
			continue ;
		}
		count++;
	}
	if (str[count - 1] != c)
		res++;
	return (res);
}

static void	get_next(char **next_str, int *next_str_len, char c)
{
	*next_str += *next_str_len;
	*next_str_len = 0;
	while (**next_str == c)
		(*next_str)++;
	while ((*next_str)[*next_str_len] && (*next_str)[*next_str_len] != c)
		(*next_str_len)++;
}

static char	**malloc_error(char **res)
{
	int	count;

	count = 0;
	while (res[count])
		free(res[count++]);
	free(res);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		num_strs;
	char	*next_str;
	int		next_str_len;
	int		count;

	if (!str)
		return (NULL);
	count = 0;
	num_strs = get_num(str, c);
	res = (char **)malloc(sizeof(char *) * (num_strs + 1));
	next_str_len = 0;
	next_str = (char *)str;
	if (!res)
		return (NULL);
	res[num_strs] = NULL;
	while (count < num_strs)
	{
		get_next(&next_str, &next_str_len, c);
		res[count] = (char *)malloc(sizeof(char) * next_str_len + 1);
		if (!res[count])
			return (malloc_error(res));
		ft_strlcpy(res[count++], next_str, next_str_len + 1);
	}
	return (res);
}
