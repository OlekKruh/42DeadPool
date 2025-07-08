/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:47:50 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/02 09:49:24 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_of(char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	j;
	int	size;

	j = 0;
	size = len_of(src);
	while (j < size && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int	len_of(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
