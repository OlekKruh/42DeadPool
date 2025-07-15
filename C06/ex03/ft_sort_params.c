/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 09:13:23 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/15 12:04:04 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);

int	main(int ac, char *av[])
{
	int		av_id;
	char	*temp;
	int		i;

	if (ac == 1)
		return (0);
	i = 0;
	while (i++ < ac)
	{
		av_id = 1;
		while (av_id < ac - 1)
		{
			if (ft_strcmp(av[av_id], av[av_id + 1]) > 0)
			{
				temp = av[av_id];
				av[av_id] = av[av_id + 1];
				av[av_id + 1] = temp;
			}
			av_id++;
		}
	}
	av_id = 1;
	while (av_id < ac)
		ft_putstr(av[av_id++]);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	id;

	id = 0;
	while (s1[id] || s2[id])
	{
		if (s1[id] != s2[id])
			return (s1[id] - s2[id]);
		id++;
	}
	return (0);
}
