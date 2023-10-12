/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:43:24 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/12 15:43:47 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}
void ft_reverse_string(char *str) {
    int length = ft_strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int digit_count(int n)
{
    int number;
    int count;
    
    number = n;
    count = 0;
    while(number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}


char *ft_itoa(int n)
{
    int digit_num = digit_count(n);
    int number = n;
    char *result;
    int i = 0;
    
    if(n >= 0)
        result = (char *)malloc(sizeof(char) * (digit_num + 1));
    else
        result = (char *)malloc(sizeof(char) * (digit_num + 2));
    while(i < digit_num)
    {
        result[i] = (number%10) + '0';
        number /= 10;
        i++;
    }
    result[i] = '\0';
    ft_reverse_string(result);
    return (result);
}

int main() {
    
    printf("%s", ft_itoa(515611));
    return 0;
}
