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

static unsigned int	ft_strlen(char const *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substring;

	i = start;
	j = 0;
	substring = (char *)malloc(len + 1);
	if (start > ft_strlen(s))
	{
		substring[0] = '\0';
		return (substring);
	}
	if (substring == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0' && j < len)
	{
		substring[j] = s[i];
		i++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}
