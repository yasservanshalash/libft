/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:06:28 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/09 15:06:30 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i = start;
    size_t j = 0;
    char *substring = (char *)malloc(len);
    if (substring == NULL)
    {
        return NULL;
    }
    
    while(s[i] != '\0' && j < len)
    {
        substring[j] = s[i];
        i++;
        j++;
    }
    substring[j] = '\0';
    return substring;
}