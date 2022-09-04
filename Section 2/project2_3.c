#include <stdio.h>

int main(void)
{
	int radius;

	printf("Input the radius of the sphere: ");
	scanf("%d", &radius);

	float volume = ((4.0f / 3.0f) * 3.14f * (radius * radius));
	
	printf("%f\n", volume);

	return 0;
}