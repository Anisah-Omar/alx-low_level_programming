#include "main.h"
/** _islower checks for lower case letters
 * c is the letter to check
 * Return: 1 if c 
 * is lowercase, 0 if otherwise
 */
int _islower(int c);
int main()

{
	int c;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
