#include<stdio.h>
int isprime (int);
int isprime( long long unsigned num) {
	if ( num%2 == 0) {
		return(0);
	}
	long long unsigned i;
	for (i = 0; i < num ; i++) {
		if (num%i==0) {
			return(0);
		}
	}
	return(1);
}
int main(){
	long long int unsigned num=600851475143;
	long long unsigned prime = 1;
	long long unsigned int i;
	for (i = 0 ; i < (num/2) ; i++) {
		if ( (num%i == 0) && (isprime(num)) ) {
			prime = i;
		}
	}
	printf("The greatest number is: %llu" , prime);
	return(0);
}
/*	num = 100;
	while (i<=num/2){
		printf("I is: %d\n" , i);
		if (num%i==0) {
		for(counter=3; counter<=i; counter++){
			if(i%counter==0){
				//printf("BROKE! @ @%d\n",i );
				break;
			}
		}
	}
	//printf("%d fact \n",i);
		if(counter==i){
				prime=i;
			}
		i+=2;
	//printf("%d prime \n",prime);
		
	}
	printf("\n greatest prime factor %llu", prime);

}
*/