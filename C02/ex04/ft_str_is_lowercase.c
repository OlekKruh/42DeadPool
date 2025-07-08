/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:13:55 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/02 12:22:10 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	lc_count;
	int	i;

	lc_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			lc_count++;
		}
		i++;
	}
	if (lc_count == i || i == 0)
	{
		return (1);
	}
	return (0);
}
