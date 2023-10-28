#include "main.h"
#include <stdlib.h>
/**
 ** _abs - Calculating absolute number
 ** @n: Parameter to check
 ** Return: 0 Always success
 **/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
