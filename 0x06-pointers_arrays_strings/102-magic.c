#include <stdio.h>

 /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
int main(void)
{
	int n;
	int c[5];
	int *r;

	c[2] = 1024;
	r = &n;
	*(r + 5) = 98;
	printf("c[2] = %d\n" c[2]);
	return (0);
}
