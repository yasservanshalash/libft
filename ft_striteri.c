/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:23:12 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/24 12:54:30 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i = 0;
    
    if (s == NULL || f == NULL)
        return ;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}
