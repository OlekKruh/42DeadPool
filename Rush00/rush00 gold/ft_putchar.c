/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:15:25 by alusnia           #+#    #+#             */
/*   Updated: 2025/06/28 16:37:34 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	assign_char(int x, int y, int count_x, int count_y)
{
	if (count_x == 1 && count_y == 1)
	{
		return (0);
	}
	else if ((count_x != 1 && count_x != x) && (count_y == 1 || count_y == y))
	{
		return (1);
	}
	else if (count_x == x && count_y == 1)
	{
		return (2);
	}
	else if ((count_x == 1 || count_x == x) && (count_y != 1 && count_y != y))
	{
		return (3);
	}
	else if (count_x == 1 && count_y == y)
	{
		return (4);
	}
	else if (count_x == x && count_y == y)
	{
		return (5);
	}
	return (6);
}

void	display_line_char(int size[], int count_x, int count_y, char visuals[])
{
	int	i;
	int	x;
	int	y;

	x = size[0];
	y = size[1];
	i = assign_char(x, y, count_x, count_y);
	write(1, &visuals[i], 1);
	if (count_x == x)
	{
		write(1, "\n", 1);
	}
}

void	ft_putchar(int x, int y, char visuals[])
{
	int	count_x;
	int	count_y;
	int	size[2];

	size[0] = x;
	size[1] = y;
	count_y = 1;
	while (count_y <= y)
	{
		count_x = 1;
		while (count_x <= x)
		{
			display_line_char(size, count_x, count_y, visuals);
			count_x++;
		}
		count_y++;
	}
}
