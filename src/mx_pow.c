#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow)
{
	if (pow == 0)
		return 1;

	double r = n;

	for (unsigned int i = 1; i < pow; i++)
		r *= n;
		
	return r;
}

