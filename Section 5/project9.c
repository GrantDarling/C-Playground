#include <stdio.h>

int main()
{
	int i,j,k,l,m,n;
	
	printf("Please enter first date: ");
	scanf("%d/%d/%d", &i,&j,&k);
	printf("Please enter second date: ");
	scanf("%d/%d/%d", &l,&m,&n);

	if (i == l) {
		if(j < m || j == m && k < n) {
			printf("Date one comes earlier\n");
		} else {	
			printf("Date two comes earlier\n");
		}
	} else if(i < l) {
		printf("Date one comes earlier\n");
	} else {
		printf("Date two comes earlier\n");
	}
}