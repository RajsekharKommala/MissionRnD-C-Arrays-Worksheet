/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int arr_i, arr_j = -1, temp = -1;
	//checking for null cases
	if (Arr == NULL)
		return NULL;
	else
		if (len <= 0)
			return NULL;
	for (arr_i = 0; arr_i < len; arr_i++)
	{
		if (Arr[arr_i] > Arr[arr_i + 1])
		{
			arr_j = arr_i;
			break;
		}
	}
	for (arr_i = arr_i + 1; arr_i< len; arr_i++)
	{
		if (Arr[arr_i] > Arr[arr_i + 1])
		{
			temp = arr_i + 1;
			break;
		}
	}
	if (temp != -1 && arr_j != -1)
	{
		//swapping the postions;;;;
		// and also sotring the positions;;;
		Arr[arr_j] += Arr[temp];
		Arr[temp] = Arr[arr_j] - Arr[temp];
		Arr[arr_j] -= Arr[temp];
	}
	return Arr;
}