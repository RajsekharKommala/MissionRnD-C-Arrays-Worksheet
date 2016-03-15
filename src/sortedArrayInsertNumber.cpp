/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	//checking for null cases
	if (Arr == NULL)
		return NULL;
	else if (len <= 0)
		return NULL;
	
	int arr_i, arr_j, arr_temp, arr_temp1;
	if (num < *(Arr))
	{
		arr_temp = *(Arr);
		*(Arr) = num;
		for (arr_j = 1; arr_j < len; arr_j++)
		{
			arr_temp1 = *(Arr + arr_j);//arr[j]
			*(Arr + arr_j + 1) = arr_temp1;
		}
		*(Arr + 1) = arr_temp;
	}
	else if (num > *(Arr + len - 1))
	{
		*(Arr + len) = num;
	}
	else if (num > *(Arr))
	{
		for (arr_i = 0; arr_i < len; arr_i++)
		{
			if (*(Arr + arr_i)<num && *(Arr + arr_i + 1) > num)
			{
				arr_temp = *(Arr + arr_i + 1);
				*(Arr + arr_i + 1) = num;
				for (arr_j = arr_i + 2; arr_j < len; arr_j++)
				{
					arr_temp1 = *(Arr + arr_j);
					*(Arr + arr_j + 1) = arr_temp1;
				}
				*(Arr + arr_i + 2) = arr_temp;
			}
		}
	}

	return Arr;
}