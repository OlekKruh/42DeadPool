/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:55:56 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/09 11:01:08 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int	str_id;
	int	find_id;

	str_id = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[str_id] != '\0')
	{
		find_id = 0;
		if (str[str_id] == to_find[find_id])
		{
			while (str[str_id] != '\0' && str[str_id] == to_find[find_id])
			{
				str_id++;
				find_id++;
			}
			if (to_find[find_id] == '\0')
			{
				return ((char *)str);
			}
		}
		str++;
	}
	return (0);
}
