// 1. set entries var and array (total can include)
// 2. loop through the user input and store it in array (with scanf)
// 3. print unsorted array 
// 4. run selected_sort() 
// 5. run the array again reversed 


// Selection Sort:
// 1. parameters = array, arr_len
// 2. check if arr_len is 0, if so return 
// 3. track index of largest number 
// 4. replace index of largest int with [n-1]
// 5. replace [n-1] with index of largest int 


#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void)
{
    char ch;
    int i, entries = 1, arr[20];
    printf("Enter a series of up to 20 integers: ");
		scanf(" %d", &arr[0]);
    for (i = 1; i < 20 && (ch = getchar() != '\n'); i++) {
        scanf(" %d", &arr[i]);
        entries++;
    }

    printf("Unsorted array: ");
    for (i = 0; i < entries; i++)
        printf("%d ", arr[i]);

		selection_sort(arr, entries);

		printf("\nSorted array: ");
		for(i = 0; i < entries; i++) 
			printf("%d ", arr[i]);

    return 0;
}

void selection_sort(int a[], int n) 
{
	if(n == 0)
		return;

	int i, highest_digit = 0, highest_index, last_digit;

	for(i = 0; i < n; i++) {
		if(highest_digit < a[i]) {
			highest_digit = a[i];
			highest_index = i;
		}
	}

	last_digit= a[n-1];
	a[n-1] = highest_digit;
	a[highest_index] = last_digit;

	selection_sort(a, n-1);
}



// #include <stdio.h>

// void selection_sort(int a[], int n);

// int main(void) 
// {
// 	char ch;
// 	int i, entries = 0, a[30];
// 	printf("Enter a series of up to 30 integers: ");
// 	for (i = 0; i < 30 && (ch = getchar()) != '\n'; i++) {
// 		scanf(" %d", &a[i]);
// 		entries++
// 	}

// 	printf("Unsorted array: ");
// 	for(i = 0; i < entries; i++)
// 		printf("%d ", a[i]);

// 	slection_sort(a, entries);

// 	printf("\nSorted array: ");
// 	for(i = 0; i < entries; i++)
// 		printf("%d ", a[i]);

// 	return 0;
// }

// void selection_sort(int a[], int n)
// {
// 	if(n == 0) return;

// 	int i, index_largest = 0;

// 	for (i = 1; i < n; i++) {
// 		if(a[i] > a[index_largest])
// 			index_largest = i;
// 	}

// 	int largest = a[index_largest];
// 	a[index_largest] = a[n-1];
// 	a[n-1] = largest;

// 	selection_sort(a, n-1);
// }