#include <stdio.h>

int main(void)
{
	int i, j, temp_val, col_sum, row_sum, arr[5][5] = {{0},{0},{0},{0},{0}};

	for(i=0; i < 5; i++) {
		printf("Enter row (set %d of 5): ", (i+1));
		for(j=0; j < 5; j++) {
			scanf("%d", &temp_val);
			arr[i][j] = temp_val;
		}
	}

	printf("%-15s", "Row totals: ");
	for(i = 0; i < 5; i++) {
		row_sum = 0;
		for(j = 0; j < 5; j++) 
			row_sum += arr[i][j];

		printf("%2d ", row_sum);
	}

	printf("\n");
	printf("%-15s", "Column totals: ");
	for(i = 0; i < 5; i++) {
		col_sum = 0;
		for(j = 0; j < 5; j++) 
			col_sum += arr[j][i];
		 
		printf("%2d ", col_sum);
	}

	return 0;
}