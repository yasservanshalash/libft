/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:25:47 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/03 10:25:48 by yshalash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *destination, const char *source, size_t size)
{
    size_t i;

    i = 0;
    if(size > 0)
    {
        while(i < size && source[i] != '\0')
        {
            destination[i] = source[i];
            i++;
        }

        destination[i] = '\0';
    }

    return i;
}