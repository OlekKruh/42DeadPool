/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:27:21 by okruhlia          #+#    #+#             */
/*   Updated: 2025/06/30 17:33:59 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	m_logic(int *pair_one, int *pair_two, int *diget_one, int *diget_two);

void	ft_print_comb2(void)
{
	int	pair_one;
	int	pair_two;
	int	diget_one;
	int	diget_two;

	pair_one = 0;
	pair_two = 1;
	diget_one = 0;
	diget_two = 0;
	m_logic(&pair_one, &pair_two, &diget_one, &diget_two);
}

void	separator(int *pair, int *diget_one, int *diget_two)
{
	*diget_one = ((*pair) / 10) % 10;
	*diget_two = (*pair) % 10;
}

void	diget_output(int *diget_one, int *diget_two)
{
	write(1, &((char){'0' + (*diget_one)}), 1);
	write(1, &((char){'0' + (*diget_two)}), 1);
}

void	m_logic(int *pair_one, int *pair_two, int *diget_one, int *diget_two)
{
	while ((*pair_one) <= 98)
	{
		(*pair_two) = (*pair_one) + 1;
		while ((*pair_two) <= 99)
		{
			separator(pair_one, diget_one, diget_two);
			diget_output(diget_one, diget_two);
			write(1, " ", 1);
			separator(pair_two, diget_one, diget_two);
			diget_output(diget_one, diget_two);
			if (!((*pair_one) == 98 && (*pair_two) == 99))
			{
				write(1, ", ", 2);
			}
			(*pair_two)++;
		}
		(*pair_one)++;
	}
}
