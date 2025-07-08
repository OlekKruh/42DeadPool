/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:59:55 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/07 10:40:18 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = str_len(src);
	if (size == 0)
		return (src_len);
	else
	{
		while (size > 1)
		{
			dest[i] = src[i];
			i++;
			size--;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

int	str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
