#include<stdio.h>
int main(){
	int num=180, counter=1, counter2=2, factor, prime=0;
		while (counter<num){
			if (num%counter==0){
				printf(" \n %d is a factor",counter);
				factor=counter;
			}
			counter++;
		}
		printf("\n the greatest factor= %d", (factor));
}
