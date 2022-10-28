#include <stdio.h>

int main()
{
	int i,j,k,l;
	int highest1, highest2, lowest1, lowest2;

	printf("Enter your 4 digits: ");
	scanf("%d %d %d %d", &i,&j,&k,&l);

if(i < j) {
	lowest1 = i;
	highest1 = j;
}

if (k < l) {
	lowest2 = k;
	highest2 = l;
}

if(highest1 < highest2) {
	highest1 = highest2;
}

if(lowest1 > lowest2) {
	lowest1 = lowest2;
}



	printf("Your highest number is: %d\n", highest1);
	printf("Your lowest number is: %d\n", lowest1);

	return 0;
}