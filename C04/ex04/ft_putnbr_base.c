/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:03:05 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/12 12:55:02 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		base_verifi(char *base);
int		is_duble(char *base);
void	put_nb(long int sign, char *base, int devisor, int nbr);

void	ft_putnbr_base(int nbr, char *base)
{
	int			devisor;
	long int	sign;

	devisor = base_verifi(base);
	if (devisor == 0 || devisor == 1)
		write(1, "", 1);
	else if (nbr == 0)
		write(1, &base[0], 1);
	else
	{
		sign = nbr;
		put_nb(sign, base, devisor, nbr);		
	}
}

void	put_nb(long int sign, char *base, int devisor, int nbr)
{
	int		id;
	char	cash[100];

	id = 0;
	if (sign < 0)
		sign *= -1;
	while (sign > 0)
	{
		cash[id++] = base[(sign % devisor)];
		sign /= devisor;
	}
	if (nbr < 0)
		cash[id] = '-';
	else
		id--;
	while (id >= 0)
		write(1, &cash[id--], 1);
}

int	base_verifi(char *base)
{
	int	id;

	id = 0;
	if (!base[0])
		return (1);
	if (is_duble(base) == 1)
		return (1);
	while (base[id] != '\0')
	{
		if (!(('a' <= base[id] && base[id] <= 'z')
				|| ('A' <= base[id] && base[id] <= 'Z')
				|| ('0' <= base[id] && base[id] <= '9')))
			return (1);
		id++;
	}
	return (id);
}

int	is_duble(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
