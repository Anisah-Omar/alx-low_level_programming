#include "main.h"
/** _isalpha checks for alphabetic letters
 * @c: is the letter to be checked
 * Return: 1 if c is a letteer, 0 if otherwise
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z');
	return (c >= 'A' && c <= 'Z');
}
