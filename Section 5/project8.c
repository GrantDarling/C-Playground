#include <stdio.h>

int main()
{
	int i, j, totalMinutes;

	printf("Enter a 24-hour time: ");
	scanf("%d:%2d", &i, &j);

	int k = i % 12;

	if(i == 24){
		totalMinutes = j;
	} else if (i == 12) {
		totalMinutes = (12 * 60) - j;
	} else {
		totalMinutes = ((24 - i) * 60) - j;
	}

	if (totalMinutes < 135) { 
		printf("No flights remain\n");
	} else if(totalMinutes >= 135 && totalMinutes < 300) {
		printf("Departure Time: 9:45 p.m. | Arrival time: 11:58 p.m.\n");
	} else if(totalMinutes >= 300 && totalMinutes < 495) {
		printf("Departure Time: 7:00 p.m. | Arrival time: 9:20 p.m.\n");
	} else if(totalMinutes >= 495 && totalMinutes < 600) {
		printf("Departure Time: 3:45 p.m. | Arrival time: 5:55 p.m.\n");
	} else if(totalMinutes >= 600 && totalMinutes < 673) {
		printf("Departure Time: 2:00 p.m. | Arrival time: 4:08 p.m.\n");
	} else if(totalMinutes >= 673 && totalMinutes < 761) {
		printf("Departure Time: 12:47 p.m. | Arrival time: 3:00 p.m.\n");
	} else if(totalMinutes >= 761 && totalMinutes < 857) {
		printf("Departure Time: 11:19 a.m. | Arrival time: 1:31 p.m.\n");
	}else if(totalMinutes >= 857 && totalMinutes < 960) {
		printf("Departure Time: 9:43 a.m. | Arrival time: 11:52 a.m.\n");
	} else if (totalMinutes >= 960) {
		printf("Departure Time: 8:00 a.m. | Arrival time: 10:16 a.m.\n");
	}
};
