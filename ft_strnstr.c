/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:50:46 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/03 17:42:21 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ADD 42 HEADER!!!
#include <stdio.h>

size_t	strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		haystack_len;
	size_t		needle_len;
	size_t		i;

	haystack_len = strlen(haystack);
	needle_len = strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i <= haystack_len - needle_len && i <= len - needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
