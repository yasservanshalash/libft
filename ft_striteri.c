#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == NULL || f == NULL) {
        return; // Handle invalid input
    }

    unsigned int i = 0;
    while (s[i] != '\0') {
        f(i, &s[i]);
        i++;
    }
}

