/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 12:16:27 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/01 09:27:53 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pack_to_string(int *nb, char list[], int *i);
void	output(int *i, char list[]);
void	conditions(int *nb);

void	ft_putnbr(int nb)
{
	int		i;
	int		sign;
	char	list[12];

	i = 0;
	sign = nb;
	if (nb == 0 || nb == -2147483648)
	{
		conditions(&nb);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
		}
		pack_to_string(&nb, list, &i);
		if (sign < 0)
		{
			list[i++] = '-';
		}
		list[i] = '\0';
		i--;
		output(&i, list);
	}
}

void	pack_to_string(int *nb, char list[], int *i)
{
	while (*nb > 0)
	{
		list[(*i)++] = *nb % 10 + '0';
		*nb /= 10;
	}
}

void	output(int *i, char list[])
{
	while ((*i) >= 0)
	{
		write(1, &list[(*i)], 1);
		(*i)--;
	}
}

void	conditions(int *nb)
{
	if (*nb == 0)
	{
		write(1, "0", 1);
	}
	else if (*nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}
