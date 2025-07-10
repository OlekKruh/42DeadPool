/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:16:03 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/10 16:10:16 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	unsigned int	id;
	int				sign;
	int				num;

	sign = 1;
	id = 0;
	num = 0;
	while (str[id] != '\0'
		&& !(('a' <= str[id] && str[id] <= 'z')
			|| ('A' <= str[id] && str[id] <= 'Z')))
	{
		if (str[id] == '-')
			sign *= -1;
		if ('0' <= str[id] && str[id] <= '9')
		{
			num = num * 10 + (str[id] - '0');
			if (!('0' <= str[id + 1] && str[id + 1] <= '9'))
				break ;
		}
		id++;
	}
	return (sign * num);
}
