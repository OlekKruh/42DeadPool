/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:13:48 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/06 14:14:48 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 4 == 0)
		return (i / 4);
	return (0);
}

int	values_check(char *param, int *m_len)
{
	int	i;
	int	low;
	int	high;
	int	sum;

	i = 0;
	low = *m_len - 1;
	high = *m_len + 1;
	while ((i + *m_len) < (*m_len * 4))
	{
		sum = ((int){param[i] - '0'} + (int){param[i + *m_len] - '0'});
		if (!(low <= sum && sum <= high))
			return (1);
	}
	if ((param[0] == '1' && param[2 * (*m_len)] != '1')
		|| (param[2 * (*m_len)] == '1' && param[0] != '1')
		|| (param[(*m_len) - 1] == '1' && param[3 * (*m_len)] != '1')
		|| (param[3 * (*m_len)] == '1' && param[(*m_len) - 1] != '1')
		|| (param[4 * (*m_len) - 1] == '1' && param[2 * (*m_len) - 1] != '1')
		|| (param[2 * (*m_len) - 1] == '1' && param[4 * (*m_len) - 1] != '1')
		|| (param[3 * (*m_len) - 1] == '1' && param[(*m_len)] != '1')
		|| (param[(*m_len)] == '1' && param[3 * (*m_len) - 1] != '1'))
		return (1);
	return (0);
}
