#include <stdio.h>
int rev();
int is_prime();

int main(void) {
	int i,j,largest;
	largest = 0;
	for (i=0;i<=999;i++) {
		for(j=0;j<=999;j++) {
			if ((i*j) == rev(i*j) && i*j > largest) {largest = i*j;}
		}
	}
printf("\n %d \n",largest);
}


int rev(int n){int reversedInteger = 0, remainder;while( n!=0 ){remainder=n%10;
reversedInteger=reversedInteger*10+remainder;n/=10;}return reversedInteger;}
