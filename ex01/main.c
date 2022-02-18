#include <stdio.h>
#include <string.h>
int	main()
{
	int x;
	char a[51] = "va";
	char b[51] = "vamos ver ";

	x = strncmp(a, b, 2);
	printf("%d\n", x);
}