#include <stdio.h>

//main function
int main(void) {
	//initialize array1 and array2 twice to bubble/selection sort them
	int bubble_array1[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	int selection_array1[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

	int bubble_array2[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
	int selection_array2[9] = {90, 80, 70, 60, 50, 40, 30, 20, 10};

	int n = 9;
	//bubble sort both arrays and count swaps for each individual item and whole process
	
	//bubble sort array1
	int i_b_array1, j_b_array1, temp_b_array1, swap_counter_b_array1;
	for (i_b_array1 = 0; i_b_array1 < n - 1; i_b_array1++)
	{
		for (j_b_array1 = 0; j_b_array1 < n - i_b_array1 - 1; j_b_array1++)
		{
			if (bubble_array1[j_b_array1] > bubble_array1[j_b_array1 + 1])
			{
				//swap
				temp_b_array1 = bubble_array1[j_b_array1];
				bubble_array1[j_b_array1] = bubble_array1[j_b_array1 + 1];
				bubble_array1[j_b_array1 + 1] = temp_b_array1;

				swap_counter_b_array1++;
			}
		}
	}

	//print out total no. of swaps
	printf("Total swaps for array1 bubble sort: %d", swap_counter_b_array1);
	
	//bubble sort array2
	int i_b_array2, j_b_array2, temp_b_array2, swap_counter_b_array2;
	for (i_b_array2 = 0; i_b_array2 < n - 1; i_b_array2++)
	{
		for (j_b_array2 = 0; j_b_array2 < n - i_b_array2 - 1; j_b_array2++)
		{
			if (bubble_array2[j_b_array2] > bubble_array2[j_b_array2 + 1])
			{
				//swap
				temp_b_array2 = bubble_array2[j_b_array2];
				bubble_array2[j_b_array2] = bubble_array2[j_b_array2 + 1];
				bubble_array2[j_b_array2 + 1] = temp_b_array2;
				swap_counter_b_array2++;
			}
		}
	}

	//print out total no. of swaps
	printf("Total swaps for array2 bubble sort: %d", swap_counter_b_array2);
	//selection sort both arrays and count swaps for each individual item and whole process

	//selection sort array1
	int i_s_array1, j_s_array1, min_index_s_array1, temp_s_array1, swap_counter_s_array1;
	for (i_s_array1 = 0; i_s_array1 < n - 1; i_s_array1++)
	{
		min_index_s_array1 = i_s_array1;
		for (j_s_array1 = i_s_array1 + 1; j_s_array1 < n; j_s_array1++)
			if (selection_array1[j_s_array1] < selection_array1[min_index_s_array1])
				min_index_s_array1 = j_s_array1;
		//swap 
		temp_s_array1 = selection_array1[i_s_array1];
		selection_array1[i_s_array1] = selection_array1[min_index_s_array1];
		selection_array1[min_index_s_array1] = temp_s_array1;
		swap_counter_s_array1++;
	}
	//print total swaps
	printf("Total swaps for array1 selection sort: %d", swap_counter_s_array1);

	//selection sort for array2
	int i_s_array2, j_s_array2, min_index_s_array2, temp_s_array2, swap_counter_s_array2;
	for (i_s_array2 = 0; i_s_array2 < n - 1; i_s_array2++)
	{
		min_index_s_array2 = i_s_array2;
		for (j_s_array2 = i_s_array2 + 1; j_s_array2 < n; j_s_array2++)
			if (selection_array2[j_s_array2] < selection_array2[min_index_s_array2])
				min_index_s_array2 = j_s_array2;
		//swap 
		temp_s_array2 = selection_array2[i_s_array2];
		selection_array2[i_s_array2] = selection_array2[min_index_s_array2];
		selection_array2[min_index_s_array2] = temp_s_array2;
		swap_counter_s_array2++;
	}
	//print total swaps
	printf("Total swaps for array1 selection sort: %d", swap_counter_s_array2);
}
