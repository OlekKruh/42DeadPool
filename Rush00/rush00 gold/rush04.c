/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:15:25 by alusnia           #+#    #+#             */
/*   Updated: 2025/06/28 16:44:21 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
		//visuals[0] = left up corner
		//visuals[1] = up&down
		//visuals[2] = right up corner
		//visuals[3] = sides
		//visuals[4] = left down corner
		//visuals[5] = right down corner
		//visuals[6] = space
void	ft_putchar(int x, int y, char visuals[]);

void	rush00(int x, int y)
{
	char	visuals[7];

	if (x <= 0 || y <= 0)
	{
		write(1, "Error - Incorrect size input\n", 29);
	}
	else
	{
		visuals[0] = 'o';
		visuals[1] = '-';
		visuals[2] = 'o';
		visuals[3] = '|';
		visuals[4] = 'o';
		visuals[5] = 'o';
		visuals[6] = ' ';
		ft_putchar(x, y, visuals);
	}
}

void	rush01(int x, int y)
{
	char	visuals[7];

	if (x <= 0 || y <= 0)
	{
		write(1, "Error - Incorrect size input\n", 29);
	}
	else
	{
		visuals[0] = '/';
		visuals[1] = '*';
		visuals[2] = '\\';
		visuals[3] = '*';
		visuals[4] = '\\';
		visuals[5] = '/';
		visuals[6] = ' ';
		ft_putchar(x, y, visuals);
	}
}

void	rush02(int x, int y)
{
	char	visuals[7];

	if (x <= 0 || y <= 0)
	{
		write(1, "Error - Incorrect size input\n", 29);
	}
	else
	{
		visuals[0] = 'A';
		visuals[1] = 'B';
		visuals[2] = 'A';
		visuals[3] = 'B';
		visuals[4] = 'C';
		visuals[5] = 'C';
		visuals[6] = ' ';
		ft_putchar(x, y, visuals);
	}
}

void	rush03(int x, int y)
{
	char	visuals[7];

	if (x <= 0 || y <= 0)
	{
		write(1, "Error - Incorrect size input\n", 29);
	}
	else
	{
		visuals[0] = 'A';
		visuals[1] = 'B';
		visuals[2] = 'C';
		visuals[3] = 'B';
		visuals[4] = 'A';
		visuals[5] = 'C';
		visuals[6] = ' ';
		ft_putchar(x, y, visuals);
	}
}

void	rush(int x, int y)
{
	char	visuals[7];

	if (x <= 0 || y <= 0)
	{
		write(1, "Error - Incorrect size input\n", 29);
	}
	else
	{
		visuals[0] = 'A';
		visuals[1] = 'B';
		visuals[2] = 'C';
		visuals[3] = 'B';
		visuals[4] = 'C';
		visuals[5] = 'A';
		visuals[6] = ' ';
		ft_putchar(x, y, visuals);
	}
}
