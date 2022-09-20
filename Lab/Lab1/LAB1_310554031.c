#define _CRT_SECURE_NO_WARNINGS
// Macro definition
#define PERSENT 100
#define MONTHS_PER_YEAR 12.0

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size = 3;
	while(size>0){
		// input
		int a, b, d;
		float c;
		char g;
		printf("Enter amount of loan: ");
		scanf("%c %d,%d", &g, &a, &b);
		printf("Enter annual rate of interest(%%): ");
		scanf("%f", &c);
		printf("Enter the number of loan periods(monthly): ");
		scanf("%d", &d);
		
		int origin = a * 1000 + b;
		
		printf("| $2000| $1000| $500| $100| $10| $1|\n");
		printf("|%6d|%6d|%5d|%5d|%4d|%3d|\n", 
				origin/2000, 
				(origin%2000)/1000, 
				(origin%2000%1000)/500,
				(origin%2000%1000%500)/100,
				(origin%2000%1000%500%100)/10,
				(origin%2000%1000%500%100%10)/1);
		printf("Monthly interest rate: %.2f%%\n", c / MONTHS_PER_YEAR);

		
		float t = c / MONTHS_PER_YEAR/ PERSENT;
		float new = origin+(t*origin*d);	

		
		printf("Total loan amount: $%6.1f\n", new);

		size--;

	}
	
	return 0;



}