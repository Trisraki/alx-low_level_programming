#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnum()
{
	return rand();
}

int generate_random_number()
{
	srand(time(NULL)); // seed the random number generator with the current time
	return randnum();
}
