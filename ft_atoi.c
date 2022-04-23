/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anatasha <anatasha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:09:19 by anatasha          #+#    #+#             */
/*   Updated: 2021/10/14 17:13:13 by anatasha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	skip(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	i = skip(str);
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * neg);
}
