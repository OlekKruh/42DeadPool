/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:08:03 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/03 15:32:43 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	j;
	int	c_count;
	int	d_count;

	j = 0;
	c_count = 0;
	d_count = 0;
	while (str[j] != '\0')
	{
		if (('a' <= str[j] && str[j] <= 'z')
			|| ('A' <= str[j] && str[j] <= 'Z'))
		{
			c_count++;
		}
		else if ('0' <= str[j] && str[j] <= '9')
		{
			d_count++;
		}
		j++;
	}
	if ((d_count == j && j > 0) || j == 0)
	{
		return (1);
	}
	return (0);
}
