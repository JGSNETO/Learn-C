/*Fundamental types of int*/

#include <stdio.h>

int main(){

	short short_a = 5;
	int normal_2 = 67;
	unsigned unsigned_a = 67u;
	long long_a = 67l;
	
	printf("Short_a = %hd, divided by int 2 is %d\n", short_a, short_a/2);
	printf("%lu", sizeof(unsigned_a));
		
	return 0;
};