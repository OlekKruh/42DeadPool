/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:09:44 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/09 18:24:44 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_id;
	int	src_id;

	dest_id = 0;
	src_id = 0;
	while (dest[dest_id] != '\0')
	{
		dest_id++;
	}
	while (src[src_id] != '\0')
	{
		dest[dest_id] = src[src_id];
		dest_id++;
		src_id++;
	}
	dest[dest_id] = '\0';
	return (dest);
}
