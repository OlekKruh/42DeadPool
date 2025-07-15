/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 15:20:18 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/15 09:23:12 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src);

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		id;

	id = 0;
	new_str = (char *)malloc(ft_strlen(src) + 1);
	if (new_str == NULL)
		return (NULL);
	else
	{
		while (src[id] != '\0')
		{
			new_str[id] = src[id];
			id++;
		}
	}
	new_str[id] = '\0';
	return (new_str);
}

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
