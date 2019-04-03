#include<stdio.h>

int main () {
	unsigned long long int i;
	i = 1;
	while (1) {
		if (i==2000000000) {printf("reached");}
		if (!(i%2)&&!(i%3)&&!(i%4)&&!(i%5)&&!(i%6)&&!(i%7)&&!(i%8)&&!(i%9)&&!(i%10)&&!(i%11)&&!(i%12)&&!(i%13)&&!(i%14)&&!(i%15)&&!(i%16)&&!(i%17)&&!(i%18)&&!(i%19)&&!(i%20)) {printf("done %llu",i);break; }
                i++;
	}
return(0);
}

