#include <stdio.h>

int main(){
	
	int range=5, primes[10000];
	int n = 1; //the vetor 'primes' position
	int divs=0; //this variable will control the number of divisors of each 'j' number; if there are more than 2 divisors (1 and the number itself), 'j' isn't prime.
	
	primes[0] = 2; // '2' is the first prime ever
	
	for(int i=3; i < range; i++){ 
		for(int j=1; j <= i; j++){ //this second loop will verify if 'i' is divisible by the numbers smaller than it.
		
			if(i % j == 0){
				divs++;
				printf("%d\n", divs);
			}
		
		
		
		
		}
			if(divs <= 2){
				primes[n] = i;
				n++;
			}
			divs=0;
	}
	s
	/*for(int k=0; k<range; k++){
		printf("%d\n", primes[k]);
	}*/
	
	return 0;
}


