#include <stdio.h>


int main(){
	
	int min_range, max_range;
	int primes[10000]; //prime list; can be changed if you wanted.
	int n = 0; //the vetor 'primes' position
	int divs=0; //this variable will control the number of divisors of each 'i' number; if there are more than 2 divisors (1 and the number itself), 'i' isn't prime.
	
	printf(" Welcome to Prime Number Generator.\n\n Enter the range in which you want to generate the primes: \n\n");
	
	printf(" From: ");
	scanf("%d", &min_range);
	
	printf(" To: ");
	scanf("%d", &max_range);
	
	printf("\n\n");
	
	for(int i = min_range; i <= max_range; i++){ 
		
		for(int j = 1; j <= i; j++){ //each 'j' will divide all 'i' to verify the number of divisors.
			if(i % j == 0){
				divs++;
			}
		}
		
		if(divs == 2){
			primes[n]=i;
			n++;
			divs=0;
		}else{
			divs=0;
		}
		
	}

	for(int i=0; i<n; i++){ //loop to print the prime list.
		printf("%d\n", primes[i]);
	}

	return 0;
}


