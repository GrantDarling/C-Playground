#include <stdio.h>

int main(void)
{
    int n;
    long i;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%15ld%15ld\n", i, i * i);

        if ((i * i) < 0)
            break;
    }

    return 0;
}
/* 
 * When i * i is assigned to an int, it overflows at 46341^2 (2,147,479.015). This means
 * it reaches the limit between the values 46340^2 (2,147,395,600) and 46341^2
 * (2,147,479.015). I can conclude from this that int is assigned 32 bits on this
 * system. 
 * 
 * However, both short and long have drastically different limits. 
 */