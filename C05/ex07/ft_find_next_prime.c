/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:55 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/13 17:17:03 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int 	i;

	i = 0;
	if (nb <= 1)
		return (2);
	else
	{
		while(1)
		if (nb + i == nb)
	}
	// int	i;

	// i = 0;
	// while (nb + i >= nb)
	// {
	// 	if (nb == 0 || nb == 1)
	// 		return (2);
	// 	if (nb == 2 || nb == 3)
	// 		return (nb);
	// 	if ((nb % 2 == 0) || (nb % 3 == 0))
	// 	{
	// 		i++;
	// 	}
	// 	return (nb + i);
	// }
	// return (404);
}
