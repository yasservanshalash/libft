// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	result = (char *)malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	toUpper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	printf("%d", index);
	return (c);
}
int	main(void)
{
	// Write C code here
	printf("%s", ft_strmapi("hello", toUpper));
	return (0);
}
