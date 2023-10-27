/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:56:02 by yasser            #+#    #+#             */
/*   Updated: 2023/10/25 13:56:04 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    if (needle[0] == '\0')
        return ((char *)haystack);
    j = 0;
    while (j < len && haystack[j])
    {
        i = 0;
        while (j < len && needle[i] && haystack[j] && needle[i] == haystack[j])
        {
            i++;
            j++;
        }
        if (needle[i] == '\0')
            return ((char *)&haystack[j - i]);
        j = j - i + 1;
    }
    return (0);
}
