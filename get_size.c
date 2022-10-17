#include "main.h"

/**
* get_size - calculates the size to cast to the argument
* @format: formated string in which to print the arguments
* @i: list of arguments to be printed
*
* Return: precision
*/
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;
	
	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;
	
	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;
	
	return (size);
}
