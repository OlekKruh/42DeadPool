/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:03:05 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/10 19:18:05 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_verifi(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		devisor;
	char	cash[100];
	int		id;
	int		sign;

	devisor = base_verifi(base);
	if (devisor == 0)
		write(1, "", 1);
	else
	{
		id = 0;
		sign = nbr;
		if (nbr < 0)
			nbr *= -1;
		while (nbr > 0)
		{
			cash[id++] = base[(nbr % devisor)];
			nbr /= devisor;
		}
		if (sign < 0)
			cash[id] = '-';
		while (id >= 0)
			write(1, &cash[id--], 1);
	}
}

int	base_verifi(char *base)
{
	if (base == "0123456789")
		return (10);
	else if (base == "01")
		return (2);
	else if (base == "0123456789ABSDEF")
		return (16);
	else if (base == "poneyvif")
		return (8);
	else
		return (0);
}
