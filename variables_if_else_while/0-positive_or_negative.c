#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("El numero $d es positivo.\n", n)
	else if (n < 0)
	printf("El numero $d es negativo.\n", n)
	else
	printf("El numero es cero.\n")
	return (0);
}
