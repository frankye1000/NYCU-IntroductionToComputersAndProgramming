#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int studentID;
	printf("Enter your student ID: ");
	scanf("%d", &studentID);


	printf("Hi, %d\n", studentID);

	system("pause");
	return 0;

}