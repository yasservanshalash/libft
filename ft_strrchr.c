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

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			index = i;
		i++;
	}
	if (index > 0)
		return (&s[index]);
	else
		return (NULL);
}
