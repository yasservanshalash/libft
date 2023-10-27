/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:24:43 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/03 17:43:02 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    if (c < 0 || c > 255) {
        return (char *)s;
    }

    int i = 0;
    int index = -1;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            index = i;
        i++;
    }

    if (index >= 0)
        return (char *)&s[index];
    else if (c == 0 && s[i] == '\0')
        return (char *)&s[i];
    else
        return NULL;
}
