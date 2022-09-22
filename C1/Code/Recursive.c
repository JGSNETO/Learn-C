#include <studio.h>

long int factorial(int n)
{
	long f =1;
	int i;
	
	for(i=1; i<=n; i++){
		f = f*i;
	}
	return f;
}

long int recursive_factorial(int n)
{
	if (n == 1){
		return 1;
	}
	else {
		return(recursive_factorial(n-1)*n);
	}
}


int main(){
	
	int how_many = 0, i;
	printf("\nI want table of factorial up to n: \n");
	scanf("%d", &how_many);
	printf("\n Factorial\n");
	
	for (int i=0; i<=how_many; i++){
		printf("\n%d\t %ld\n", i, factorial(i));	
	printf("\n\n");
	for (int i=0; i<=how_many; i++)
		printf("\n%d\t %ld\n", i, recursive_factorial(i));
	printf("\n\n");
	return 0;
};