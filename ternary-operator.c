#include <stdio.h>

int main(){
	int speed;
	printf("\Enter your speed as an integer: ");
	scanf("%d", &speed);
	speed = (speed <= 65) ? (65) : (speed <=70) ? (70):(90);
	switch (speed){
		case 65: printf("\nNo speeding Ticket\n");break;
		case 70: printf("\nSpeeding Ticket\n");break;
		case 90: printf("\nExpensive speeding\n");break;
		default: printf("\nIncorrect speed\n");break;
	}
	return 0;
};