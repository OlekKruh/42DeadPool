/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:25:50 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/17 12:56:58 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strslen(char **strs, int *strs_len, int *size);
int		ft_seplen(char *sep);
void	joining(char **strs, char *sep, char *strjoin, int *size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strs_len;
	int		sep_len;
	char	*strjoin;

	if (size == 0)
	{
		strjoin = malloc(1);
		return (strjoin);
	}
	ft_strslen(strs, &strs_len, &size);
	sep_len = ft_seplen(sep);
	strjoin = malloc(strs_len + ((sep_len * size) - sep_len) + 1);
	joining(strs, sep, strjoin, &size);
	return (strjoin);
}

void	ft_strslen(char **strs, int *strs_len, int *size)
{
	int	str_id;
	int	char_id;

	*strs_len = 0;
	str_id = 0;
	while (str_id < *size)
	{
		char_id = 0;
		if (strs[str_id][char_id] == '\0')
			(*strs_len)++;
		else
		{
			while (strs[str_id][char_id] != '\0')
			{
				(*strs_len)++;
				char_id++;
			}
		}
		str_id++;
	}
}

int	ft_seplen(char *sep)
{
	int		id;

	id = 0;
	while (sep[id] != '\0')
		id++;
	return (id);
}

void	joining(char **strs, char *sep, char *strjoin, int *size)
{
	int		str_id;
	int		char_id;
	int		jstr_id;
	int		sep_id;

	jstr_id = 0;
	str_id = 0;
	while ((str_id) < *size)
	{
		char_id = 0;
		sep_id = 0;
		while (strs[str_id][char_id] != '\0')
			strjoin[jstr_id++] = strs[str_id][char_id++];
		if ((str_id) != (*size) - 1)
		{
			while (sep[sep_id] != '\0')
				strjoin[jstr_id++] = sep[sep_id++];
		}
		else
			strjoin[jstr_id++] = '\0';
		str_id++;
	}
}
