#include <stdio.h>
#include <stdlib.h>
int test(void);

int main(void) {
  int counter = 0;

  for (short i=0; i < 201 ; i++ ){
    for (short j=0; j < 101 ; j++ ){
      for ( short k=0; k < 41 ; k++ ){
	for ( short l=0; l < 21 ; l++ ){
	  for ( short m=0; m < 11 ; m++) {
	    for ( short n=0; n < 5; n++ ) {
	      for ( short o=0; o < 3; o++ ){
		if ((i+j*2+k*5+l*10+m*20+n*50+o*100)==200){
		  counter++;
		}
	      }
	    }
	  }
	}
      }
    }
  }
  printf("The total number of possible ways are: %d\n",counter);
  return(0);
}
