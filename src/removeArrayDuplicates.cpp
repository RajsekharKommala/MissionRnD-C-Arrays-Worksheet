/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

Ex 2: [4,4,2,2,1,5] output : [4,2,1,5]

INPUTS: Integer array and length of the array .

OUTPUT: Update input array by removing duplicate values and return the final array length

ERROR CASES: Return -1 for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int removeArrayDuplicates(int *Arr, int len)
{
	int ret_final_len=len, i, j;
	if (Arr != NULL && len > 0)
	{
	 for (i = 0; i < len; i++)
	 {
		if (Arr[i] != -1)
		{
		 for (j = i + 1; j < len; j++)
		{
		  if (Arr[j] != -1)
		{
		   if (Arr[i] == Arr[j])
		   {
				Arr[j] = -1;
				ret_final_len--;
			}
		}
		}
		}
	}
	
	for (i = 0; i < len; i++)
	{
	 if (Arr[i] < 0)
	{
	 for (j = i + 1; j < len; j++)
	 {
		if (Arr[j] > -1)
		{
		Arr[i] = Arr[j];
		Arr[j] = -1;
		break;
		}
	}
}
}
		return ret_final_len;
	}
	else{
		return -1;
	}

}