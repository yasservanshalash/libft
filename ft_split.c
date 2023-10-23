/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshalash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:17:11 by yshalash          #+#    #+#             */
/*   Updated: 2023/10/23 12:35:38 by yasser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	word_counter(char const *s, char delimiter)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == delimiter)
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**result;
	int		k;

	i = 0;
	words = word_counter(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j] != '\0')
			j++;
		result[i] = (char *)malloc((j + 1) * sizeof(char));
		if (result[i] == NULL)
		{
			k = 0;
			while (k < i)
			{
				free(result[k]);
				k++;
			}
			free(result);
			return (NULL);
		}
		strncpy(result[i], s, j);
		result[i][j] = '\0';
		s += j;
		i++;
	}
	result[i] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	**result;
// 	int		numStrings;
// 	int		i;

// 	result = ft_split("Monday,Tuesday,Wednesday", ',');
// 	if (result == NULL)
// 	{
// 		printf("Memory allocation error.\n");
// 		return (1);
// 	}
// 	// Calculate the number of strings in the array.
// 	numStrings = 0;
// 	while (result[numStrings] != NULL)
// 	{
// 		numStrings++;
// 	}
// 	i = 0;
// 	while (i < numStrings)
// 	{
// 		printf("%s\n", result[i]); // Print each string in the array
// 		i++;
// 	}
// 	// Free the memory allocated for the result array.
// 	i = 0;
// 	while (i < numStrings)
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
