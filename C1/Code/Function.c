#include <stdio.h>

void wrt_repeate(int count){
	while(count >0){
		printf("\nVery");
		count--;
	};
	printf("Much\n\n);
}

int main(){
	int repeat = 0;
	printf("how strong is your love 1-10: ");
	scanf("%d", &repeat);
	printf("\nI love your very");
	wrt_very(repeat);
	return 0;
};