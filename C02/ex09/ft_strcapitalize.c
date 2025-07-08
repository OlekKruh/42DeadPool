/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:02:31 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/04 11:41:24 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	verifi(char *c, int i);
void	lower(char *c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lower(str);
	while (str[i] != '\0')
	{
		if (i == 0 || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if ('a' <= str[i] && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

void	lower(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if ('A' <= str[j] && str[j] <= 'Z')
		{
			str[j] = str[j] + 32;
		}
		j++;
	}
}
