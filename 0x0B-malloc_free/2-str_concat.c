#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int t, s1_length = 0, s2_length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = 0;
	while (s1[t] != '\0')
		t++;
		s1_length++;
	}
	t = 0;
	while (s2[t] != '\0')
		t++;
		s2_length++;
	}
	concatenated = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (concatenated == NULL)
		return (NULL);
	t = j = 0;
	while (s1[t] != '\0')
	{
		concatenated[t] = s1[t];
		t++;
	}

	while (s2[j] != '\0')
	{
		concatenated[t] = s2[j];
		t++, j++;
	}
	concatenated[t] = '\0';
	return (concatenated);
}
