/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:15:02 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/06 14:15:23 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	error_message(int error_num)
{
	if (error_num == 0)
		write(1, "Incorrect number of arguments. Too Many arguments.\n", 51);
	else if (error_num == 1)
		write(1, "Incorrect number of arguments. Too Few arguments.\n", 50);
	else if (error_num == 2)
		write(1, "Not enough values to build a matrix.\n", 37);
	else if (error_num == 3)
		write(1, "Incorrect combination of parameters.\n", 37);
}
