/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:53:03 by okruhlia          #+#    #+#             */
/*   Updated: 2025/06/30 17:33:34 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	output(int *a, int *b, int *c)
{
	write(1, &((char){'0' + *a}), 1);
	write(1, &((char){'0' + *b}), 1);
	write(1, &((char){'0' + *c}), 1);
}

void	separation(int *n, int *a, int *b, int *c)
{
	*a = *n / 100;
	*b = (*n / 10) % 10;
	*c = *n % 10;
}

void	end_of_entry(int *a, int *b, int *c)
{
	if (! (*a == 7 && *b == 8 && *c == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n;
	int	a;
	int	b;
	int	c;
	int	counter;

	n = 0;
	counter = 0;
	while (n <= 999 && counter < 120)
	{
		separation(&n, &a, &b, &c);
		if (a < b && b < c)
		{
			output(&a, &b, &c);
			end_of_entry(&a, &b, &c);
			counter++;
		}
		n++;
	}
}
