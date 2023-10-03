/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:56:13 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/03 17:52:32 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (j < size && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int main()
{
    char str[] = "Hello";
    char str2[] = " World";
    printf("%d", strlcat(str2, str, 7));
    printf("%zu", ft_strlcat(str2, str, 7));
    return 0;
}
*/
