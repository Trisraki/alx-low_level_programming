#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 6

/**
 * is_palindrome - Check if a string is a palindrome.
 * @str: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *str)
{
	int i, len = strlen(str);
	for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, product, largest_palindrome = 0;
	char *product_str;

	product_str = malloc(sizeof(char) * (MAX_DIGITS + 1)); /* allocate memory for product string */
	if (product_str == NULL) {
        printf("Error: Memory allocation failed!\n");
        exit(1);
	}
	product_str[MAX_DIGITS] = '\0'; /* null-terminate the string */
	for (i = 999; i >= 100; i--) {
        for (j = i; j >= 100; j--) {
            product = i * j;
            k = 0;
            while (product > 0) {
                product_str[k++] = '0' + (product % 10); /* convert digit to character and store in array */
                product /= 10;
            }
            while (k < MAX_DIGITS) { /* pad the remaining digits with '0' */
                product_str[k++] = '0';
            }
            if (is_palindrome(product_str) && i * j > largest_palindrome) {
                largest_palindrome = i * j;
            }
        }
    }
	free(product_str); /* free the memory allocated for product string */
	printf("Largest palindrome made from the product of two 3-digit numbers: %d\n", largest_palindrome);
	return 0;
}
