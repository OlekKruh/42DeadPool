/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:37:31 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/16 13:23:33 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	id;

	if (min >= max)
		return (*range = NULL, 0);
	else
	{
		id = 0;
		*range = malloc(4 * (max - min));
		if (!(*range))
			return (-1);
		while (id < (max - min))
		{
			(*range)[id] = (min + id);
			id++;
		}
	}
	return (id);
}
