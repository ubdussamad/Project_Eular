#include <stdio.h>
// Even fibbonachhi numbers sum upto 4million'th term

long int sum = 0;

int main(void) {
	int i,x,y,n,k;
	//printf("Enter the len:");scanf("%d",&n);
	x = 1;
	y = 2;
	i = 0;
	while (1) {
		//printf("%d,",x);
		if ((x / 4000000.0) > 1.0 ) {break;}
		if ((x % 2) == 0) {
			sum += x;
		}		
		k = x;
		x = y;
		y = k + y;
		i++;
	}
printf("%lu",sum);
return sum;
}
