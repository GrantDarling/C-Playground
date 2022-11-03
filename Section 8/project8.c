#include <stdio.h>

int main(void)
{
	int i, j, low = 100, high = 0, temp_val, col_sum, row_sum, arr[5][5] = {{0},{0},{0},{0},{0}};

	for(i=0; i < 5; i++) {
		printf("Enter 5 student grades (quiz #%d): ", (i+1));
		for(j=0; j < 5; j++) {
			scanf("%d", &temp_val);
			arr[i][j] = temp_val;
		}
	}

	for(i = 0; i < 5; i++) {
		row_sum = 0, low = 100, high = 0;

		for(j = 0; j < 5; j++) {
			if(arr[i][j] < low)
				low = arr[i][j];
		
			if(arr[i][j] > high)
				high = arr[i][j];

			row_sum += arr[i][j];
		}

		printf("Quiz %d Average: %d\n", (i+1), (row_sum / 5));
		printf("High Score: %d\n", high);
		printf("Low Score:  %d\n", low);
	}

	return 0;
}