#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	long long int lli;
	char buffer[256];

	printf("Enter a long number: ");

	fgets(buffer, 256, stdin);
	lli = atoll(buffer);

	printf("The value entered is %lld. Its double is %lld.\n", lli, lli * 2);
	
	_getch();
	return 0;
}