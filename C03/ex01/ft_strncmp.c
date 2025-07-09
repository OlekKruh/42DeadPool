/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:22:40 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/09 10:54:51 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	id;

	id = 0;
	while ((s1[id] || s2[id]) && id < n)
	{
		if (s1[id] != s2[id])
			return (s1[id] - s2[id]);
		id++;
	}
	return (0);
}
