#include <stdio.h>
int main() {
	int distance, speed,hour,day,hours;
	int H = 60;
	double min,time,final,mins;
	printf("거리와 속력을 입력하시오: ");
	scanf_s("%d %d", &distance, &speed);
	time = (double)distance / speed * 60;
	day = time / 1440;
	hour = time - (day * 1440);
	hours = hour / 60;
	min = (hour - (hours * 60)) % 60;
	mins = (double)min / (double)H;
	final = hours + mins;
	printf("%d day %.1lf hour\n", day, final);

	return 0;
}