/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <okruhlia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:51:27 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/14 12:55:44 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	char_id;

	while (--argc != 0)
	{
		char_id = 0;
		while (argv[argc][char_id] != '\0')
			write(1, &argv[argc][char_id++], 1);
		write(1, "\n", 1);
	}
}
