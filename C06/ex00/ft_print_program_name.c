/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:36:54 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/14 14:56:26 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	id;

	id = 0;
	argc = 2;
	while (argv[0][id])
		write(1, &argv[0][id++], 1);
	write(1, "\n", 1);
}
