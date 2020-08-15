#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	printf("Enter Collect Points:");
	scanf("%d", &a);
	printf("Enter Midterm Points:");
	scanf("%d", &b);
	printf("Enter Final Points:");
	scanf("%d", &c);
	int d = a + b + c;
	if (d <= 100 && d >= 80)
		printf("A");
	else if (d <= 100 && d >= 80)
		printf("A");
	else if (d <= 79 && d >= 75)
		printf("B+");
	else if (d <= 74 && d >= 70)
		printf("B");
	else if (d <= 69 && d >= 65)
		printf("C+");
	else if (d <= 64 && d >= 60)
		printf("C");
	else if (d <= 59 && d >= 55)
		printf("D+");
	else if (d <= 54 && d >= 50)
		printf("D");
	else if (d < 50)
		printf("F");
	else
		printf("Error");
}