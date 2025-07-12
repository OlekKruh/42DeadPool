/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:27:36 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/12 11:07:30 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	duble;
	char		arr[20];
	int			id;

	id = 0;
	duble = nb;
	if (duble < 0)
		duble *= -1;
	else if (duble == 0)
	{
		write(1, "0", 1);
		return ;
	}
	while (duble > 0)
	{
		arr[id++] = (duble % 10) + '0';
		duble /= 10;
	}
	if (nb < 0)
		arr[id] = '-';
	else
		id--;
	while (id >= 0)
		write(1, &arr[id--], 1);
}
