/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 15:16:03 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/12 12:28:26 by okruhlia         ###   ########.fr       */
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

int	main(void)
{
	int	x;

	x = ft_atoi("1 2 3 4 5 6 7 8 9 0 a b c d e f g h i j k l m n o p q r s t u v w x y z");
	printf("exp: 1\n");
	printf("get: %d\n", x);
	printf("\n");

	x = ft_atoi("+-123");
	printf("exp: -123\n");
	printf("get: %d\n", x);
	printf("\n");

	x = ft_atoi("--12-3");
	printf("exp: 12\n");
	printf("get: %d\n", x);
	printf("\n");

	x = ft_atoi("  - 000");
	printf("exp: 0\n");
	printf("get: %d\n", x);
	printf("\n");

	x = ft_atoi("000123");
	printf("exp: 123\n");
	printf("get: %d\n", x);
	printf("\n");

	x = ft_atoi("-");
	printf("exp: 0\n");
	printf("get: %d\n", x);
	printf("\n");
}
