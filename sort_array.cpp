#include "const.h"
#include <iostream>

void sort_array(int* elements)
{
	int temp, start = 0, min_position, min_element;
	while (start != total)
	{
		min_element = elements[start];
		min_position = start;
		for (int i = start; i < total; i++)
		{
			if (elements[i] < min_element) {
				min_element = elements[i];
				min_position = i;
			}
		} if (min_position != start)
		{
			temp = elements[start];
			elements[start] = elements[min_position];
			elements[min_position] = temp;
		}
		start++;
	}
}