/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:27:36 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/08 15:13:52 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int			i;
	long int	n;
	char		buf[20];

	n = nb;
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		buf[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		buf[i++] = '-';
	while (i--)
		ft_putchar(buf[i]);
	if (nb == -2147483648)
		write(1, "2147483648", 11);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
