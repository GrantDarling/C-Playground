#include <stdio.h>

int main(void) 
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
	printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

	int rowSum1 = a + b + c + d;
	int rowSum2 = e + f + g + h;
	int rowSum3 = i + j + k + l;
  int rowSum4 = m + n + o + p;

	int columnSum1 = a + e + i + m;
	int columnSum2 = b + f + j + n;
	int columnSum3 = c + g + k + o;
	int columnSum4 = d + h + l + p;

	int diagonalSum1 = a + f + k + p;
	int diagonalSum2 = d + g + j + m;

	printf("Row sums: %d %d %d %d\n", rowSum1, rowSum2, rowSum3, rowSum4);
	printf("Column sums: %d %d %d %d\n", columnSum1, columnSum2, columnSum3, columnSum4);
	printf("Diagonal sums: %d %d\n", diagonalSum1, diagonalSum2);
}