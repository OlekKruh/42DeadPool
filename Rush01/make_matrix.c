/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 13:50:30 by alusnia           #+#    #+#             */
/*   Updated: 2025/07/06 14:20:47 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 *     0,   1,   2,   3
 *8  [0,0; 1,0; 2,0; 3,0] 12
 *9  [0,1; 1,1; 2,1; 3,1] 13
 *10 [0,2; 1,2; 2,2; 3,2] 14
 *11 [0,3; 1,3; 2,3; 3,3] 15
 *    4,   5,   6,   7
 */

#include <unistd.h>
#include <stdlib.h>

void	write_all(int matrix_size, char *matrix, int i);
void	put_chars(char *arr, int matrix_size, char *matrix);
void	write_char(char *digit, int matrix_size, char *matrix, int i);

void	export_matrix(int matrix_size, char *matrix)
{
	int		i;
	char	c;

	i = 0;
	while (matrix[i])
	{
		c = matrix[i];
		write(1, &c, 1);
		if (i % matrix_size == matrix_size - 1)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}

void	assign_spots(int matrix_size, char *matrix)
{
	int	i;

	i = 0;
	while (i < matrix_size * matrix_size)
	{
		matrix[i] = '0';
		i++;
	}
	matrix[i] = '\0';
}

void	make_matrix(char *arr, int matrix_size)
{
	char	*matrix;

	matrix = (char *)malloc(matrix_size * matrix_size);
	assign_spots(matrix_size, matrix);
	put_chars(arr, matrix_size, matrix);
	export_matrix(matrix_size, matrix);
	free(matrix);
}
