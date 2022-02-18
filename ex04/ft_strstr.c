int	count(char	*s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	cmp(char *s1, char *s2, unsigned int size)
{
	int i;
	int anchor;

	i =  0;
	while (s1[i] != '\0')
	{
		i++;
		while (s1[i] == *s2 && size > 1)
		{
			i++;
			s2++;
		}
		anchor = i;
		return (i);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int b;
	char *result;

	size = count(to_find);
	b = cmp(str, to_find, size);

	if (b == 0)
		return (str);
	else
	{
		while (*str != '\0')
		{
			*result = *str;
			result++;
			str++;
		}
		return (result);
	}
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char s1[100] = "frutas tropicais e buenos dias maracuya";
	char *s2;
	char *result;
	s2 = "tropi";

	result = ft_strstr(s1, s2);
	printf("ANGELA = %s\n", result);
	result = strstr(s1, s2);
	printf("ORIGINAL = %s\n", result);
}
