#include "const.h"
#include <time.h>
#include <windows.h>

void generate_array(int* elements)
{
	srand(time(0));
	for (int i = 0; i < total; i++)
	{
		elements[i] = rand() % 100;
	}
}