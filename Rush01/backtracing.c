/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alusnia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:23:30 by alusnia           #+#    #+#             */
/*   Updated: 2025/07/06 13:23:33 by alusnia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     verify_sum(int matrix_size, char *matrix, int i)
{
    int j;
    int sum;

    sum = 0;
    if (i < matrix_size)
    {
        while (i <= matrix_size * matrix_size)
        {
            sum += matrix[i] - '0';
            i += matrix_size;
        }
    }
    else if(i >= 2 * matrix_size && i < 3 * matrix_size)
    {
        i = (i % matrix_size) * matrix_size;
        j = i;
        while (j < ((i % matrix_size)+ 1) * matrix_size)
            sum += matrix[j++] - '0';
    }
    if (sum == ((1 + matrix_size)/2) * matrix_size)
        return (1);
    return (0);
}

int     verify_column_down(int goal, int matrix_size, char *matrix, int i)
{
    int     sum;
    char     highest;

    sum = 0;
    i = matrix_size * (matrix_size - 2) + i;
    while (i >= 0)
    {
        if (sum == 0 || matrix[i] > highest)
        {
            highest = matrix[i];
            sum += matrix[i] - '0';
        }
        i -= matrix_size;
    }
    if (sum == goal)
        return (1);
    return (0);
}

int     verify_column_up(int goal, int matrix_size, char *matrix, int i)
{
    int     sum;
    char     highest;

    sum = 0;
    while (i < matrix_size * matrix_size)
    {
        if (sum == 0 || matrix[i] > highest)
        {
            highest = matrix[i];
            sum += matrix[i] - '0';
        }
        i += matrix_size;
    }
    if (sum == goal)
        return (1);
    return (0);
}

int     verify_column_left(int goal, int matrix_size, char *matrix, int i)
{
    int     j;
    int     sum;
    char    highest;

    sum = 0;
    i = (i % matrix_size) * matrix_size;
    j = i;
    while (i < j + matrix_size)
    {
        if (sum == 0 || matrix[i] > highest)
        {
            highest = matrix[i];
            sum += matrix[i] - '0';
        }
        i++;
    }
    if (sum == goal)
        return (1);
    return (0);
}

int     verify_column_right(int goal, int matrix_size, char *matrix, int i)
{
    int     j;
    int     sum;
    char    highest;

    sum = 0;
    i = (i % matrix_size) * matrix_size + matrix_size - 1;
    j = i - matrix_size;
    while (i >= j)
    {
        if (sum == 0 || matrix[i] > highest)
        {
            highest = matrix[i];
            sum += matrix[i] - '0';
        }
        i--;
    }
    if (sum == goal)
        return (1);
    return (0);
}

int     verify_visibility(char *arr, int matrix_size, char *matrix, int i)
{
    int goal;
    
    goal = arr[i];
    if (i < matrix_size && verify_column_up(goal, matrix_size, matrix, i) == 1)
        return (1);
    else if (i < matrix_size * 2 && verify_column_down(goal, matrix_size, matrix, i) == 1)
        return (1);
    else if (i < matrix_size * 3 && verify_column_left(goal, matrix_size, matrix, i) == 1)
        return (1);
    else if (i < matrix_size * 4 && verify_column_right(goal, matrix_size, matrix, i) == 1)
        return (1);
    return (0);
}

int     verify_combo(char *arr, int matrix_size, char *matrix)
{
    int i;

    i = 0;
    while (i < matrix_size * 4)
    {
        if(verify_sum(matrix_size, matrix, i) == 1 && verify_visibility(arr, matrix_size, matrix, i) == 1)
            i++;
        else
            return (0);
    }
    return (1);
}

int    standard_combo(char *arr, int matrix_size, char *matrix, int point)
{
    char    digit;

    if (point != 0)
        point++;
    digit = '1';
    while (digit <= matrix_size + '0')
    {
        if (matrix[point] == '0')
        {
            matrix[point] = digit;
            digit++;
        }
        if (point < matrix_size * matrix_size - 1)
        {
            if (standard_combo(arr, matrix_size, matrix, point) == 1)
                return (1);
            else
                return (0);
        }
        else if (point == matrix_size * matrix_size -1)
            return (verify_combo(arr, matrix_size, matrix));
    }
    return (0);
}

void    backtracing(char *arr, int matrix_size, char *matrix)
{
    int point;

    point = 0;
    while (1)
    {
        standard_combo(arr, matrix_size, matrix, point);
    }
}