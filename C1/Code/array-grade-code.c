#include<stdio.h>

int main(){
	const int SIZE = 5;
	
	int grades[SIZE] = {78, 67, 92, 83, 88};
	double sum = 0.0; 
	int i;
	
	printf("\n my grades are:\n");
	
	for(int i=0; i<SIZE; i++){
		printf("%d\t", grades[i]);
	}
	printf("\n\n");
	
	for(int i=0; i<SIZE; i++){
		sum = sum + grades[i];
	}
	
	printf("My average if %.2f\n\n", sum/SIZE);
	
	
	return 0;
}