/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:16:03 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/12 12:35:00 by okruhlia         ###   ########.fr       */
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
	while (str[id] == ' ' || str[id] == '\t'
		||str[id] == '\n' || str[id] == '\r'
		||str[id] == '\v' || str[id] == '\f')
		id++;
	while (str[id] == '-' || str[id] == '+')
	{
		if (str[id] == '-')
			sign *= -1;
		id++;
	}
	while ('0' <= str[id] && str[id] <= '9')
	{
		num = num * 10 + (str[id] - '0');
		id++;
	}
	return (sign * num);
}
