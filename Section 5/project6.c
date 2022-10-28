#include <stdio.h>

int main()
{
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11, i12,
			first_sum, second_sum, total;

	printf("Enter your UPC number: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%d", &i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

	
	first_sum = (i1*3)+(i3*3)+(i5*3)+(i7*3)+(i9*3)+(i11*3);
	second_sum = i2+i4+i6+i8+i10+i12;
	total = first_sum + second_sum;

	if(total % 10 == 0) {
		printf("VALID\n");
	} else {
		printf("NOT VALID\n");
	}

	return 0;
}