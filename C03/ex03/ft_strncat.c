/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:27:26 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/09 10:58:46 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	id;

	dest_len = 0;
	id = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (id < nb && src[id] != '\0')
	{
		dest[dest_len] = src[id];
		dest_len++;
		id++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
