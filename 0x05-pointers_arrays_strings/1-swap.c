#include "main.h"

/**
  * swap_int - swaps values of a and b
  * temp: is a temporary holding value
  * @a : is an pointer to interger
  * @b : is a ponter to an integer
  *
  *returns: nothing
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
