/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:23:12 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/16 14:23:13 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == NULL || f == NULL) {
        return; // Handle invalid input
    }

    unsigned int i = 0;
    while (s[i] != '\0') {
        f(i, &s[i]);
        i++;
    }
}

