#include <stdio.h>

int	memcmp(const void *ptr1, const void *ptr2, size_t num )
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
