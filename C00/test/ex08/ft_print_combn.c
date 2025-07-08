/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okruhlia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 13:26:46 by okruhlia          #+#    #+#             */
/*   Updated: 2025/06/30 13:39:29 by okruhlia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_combn(int n);
void verifi_digit_comb(int num)

int main()
{
    ft_print_combn(4);
    return 0;
}

void ft_print_combn(int n)
{
    int generated_number;
    int range_end;
    
    generated_number = 0;
    range_end = calc_range_end(n);
    
    while (generated_number <= range_end)
    {
        //printf("%d ", generated_number);
        verifi_digit_comb(generated_number);
        generated_number++;
    }
}

int calc_range_end(int n)
{
    int res;
    res = 1;
    
    while (n != 0)
    {
        res *= 10;
        n--;
    }
    res -= 1;
    return (res);
}

void verifi_digit_comb(int num)
{
    int last_dig;
    int next_dig;
    
    while (num > 0)
    {
        next_dig = num % 10;
    }
}
