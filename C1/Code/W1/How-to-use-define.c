/*How to use define macro*/

#include<studio.h>
#define PI 3.14
int main(){

	float a,b,area;
	printf("Input two floats: ");
	scanf("%f %f", &a, &b);
	area = a*b*PI;
	printf("\nArea is: %f", area);
	return 0;
	
}
	