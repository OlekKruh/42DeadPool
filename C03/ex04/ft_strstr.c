/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:55:56 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/07 17:50:55 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i] != '\0' && str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
			{
				return ((char *)str);
			}
		}
		str++;
	}
	return (0);
}
