#include <stdio.h>

int main()
{
	int i,j,k,l=99,m=99,n=99;

	for(;;) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &i,&j,&k);

		if(i == 0 && j == 0 && k == 0) {
			if(l==99) {
				l = 0, m = 0, n = 0;
			}
			break;
		}

		if(i < l || i == l && j < m || i == l && j == m && k < n) {
				l = i;
				m = j;
				n = k;
		}
	}	

	printf("%d/%d/%d is the earliest date\n", l,m,n);

	return 0;
}