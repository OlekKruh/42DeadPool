/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:07:55 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/15 15:38:47 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0 || nb == 1)
		return (0);

	while ((i * i) <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
