/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:42:03 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/16 14:11:41 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		mi_ma_dif;
	int		id;

	if (min >= max)
		return (NULL);
	else
	{
		id = 0;
		mi_ma_dif = max - min;
		arr = (int *)malloc(4 * mi_ma_dif);
		if (!arr)
			return (NULL);
		while (id < mi_ma_dif)
		{
			arr[id] = (min + id);
			id++;
		}
		return (arr);
	}
}
