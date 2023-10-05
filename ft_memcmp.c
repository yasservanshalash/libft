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

// ADD 42 HEADER!!

#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num )
{
	size_t	i;

	i = 0;
	while ((char *)ptr1 && (char *)ptr2 && i < num)
	{
		if (*(char *)ptr1 + i != *(char *)ptr2 + i)
			return (*(char *)ptr1 + i - *(char *)ptr2 + i);
		i++;
	}
	return (0);
}
