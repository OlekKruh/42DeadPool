/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:23:47 by okruhlia          #+#    #+#             */
/*   Updated: 2025/07/06 14:24:22 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_all(int matrix_size, char *matrix, int i)
{
	int		temp;
	char	c;

	c = '1';
	if (i < matrix_size * 2)
	{
		temp = i % matrix_size;
		while (temp <= (i % matrix_size) + matrix_size * (matrix_size -1))
		{
			matrix[temp] = c;
			temp += matrix_size;
			c++;
		}
	}
	else
	{
		temp = (i % matrix_size) * matrix_size;
		i = temp;
		while (temp < i + matrix_size)
		{
			matrix[temp] = c;
			temp++;
			c++;
		}
	}
}

void	write_char(char *digit, int matrix_size, char *matrix, int i)
{
	int	temp_i;

	if (i < matrix_size)
	{
		temp_i = i;
		matrix[temp_i] = digit[0];
	}
	else if (i < matrix_size * 2)
	{
		temp_i = (i % matrix_size) + matrix_size * (matrix_size - 1);
		matrix[temp_i] = digit[0];
	}
	else if (i < matrix_size * 3)
	{
		temp_i = (i - 2 * matrix_size) * matrix_size;
		matrix[temp_i] = digit[0];
	}
	else
	{
		temp_i = (i % matrix_size) * matrix_size + matrix_size - 1;
		matrix[temp_i] = digit[0];
	}
}

void	put_chars(char *arr, int matrix_size, char *matrix)
{
	char	digit[2];
	int		i;

	digit[0] = matrix_size + '0';
	i = 0;
	while (i < matrix_size * matrix_size)
	{
		digit[1] = arr[i];
		if (arr[i] == matrix_size + '0')
			write_all(matrix_size, matrix, i);
		else if (arr[i] == '1')
			write_char(digit, matrix_size, matrix, i);
		i++;
	}
}
