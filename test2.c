#include <stdlib.h>
#include <stdio.h>

int main() {
	char* addr;

	addr = malloc(250);

	int i;

	for (i = 0; i < 150; i++)
	{
		addr[i] = 'a';
	}

	addr[3] = 'z';
	addr[10] = 0;

	for (i = 0; i < 4; i++)
	{
		addr[10 + i] = addr[3];
	}

	addr[0] = 'b';
	
	printf("%p\n", addr);
	printf("%p\n", &i);

	free(addr);
}
