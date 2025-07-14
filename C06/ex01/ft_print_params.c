/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:42:44 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/14 12:49:09 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	arg_id;
	int	char_id;

	arg_id = 1;
	while (arg_id < argc)
	{
		char_id = 0;
		while (argv[arg_id][char_id] != '\0')
			write(1, &argv[arg_id][char_id++], 1);
		write(1, "\n", 1);
		arg_id++;
	}
}
