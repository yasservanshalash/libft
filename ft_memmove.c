/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:11:12 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/03 17:49:32 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len) {
    char *source = (char *)src;
    char *destination = (char *)dst;

    if (source == NULL && len == 0)
        return destination;
    if (source == NULL)
        return NULL;

    if (source < destination) {
        while (len > 0) {
            len--;
            destination[len] = source[len];
        }
    } else {
        size_t i = 0;
        while (i < len) {
            destination[i] = source[i];
            i++;
        }
    }

    return destination;
}
