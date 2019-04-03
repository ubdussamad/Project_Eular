# include <iostream>
# include <cmath>
bool prime (  long long unsigned x  );
long long unsigned rotate( long long unsigned x );
long long unsigned lp( long long unsigned x , int rc );
int base(long long unsigned x);
using namespace std;// Very sloppy code

int main( void )  {
  long long unsigned i = 1;
  int count = 0;
  for(;i<1000000;i+=2) {
    int parity = 1;
    if ( i%3==0 || i%5==0 || i%7==0 ) {
      continue;}
      
    for (int j=base(i);j;j--) {
      if (!(prime(lp(i,j)))) {
	parity=0;
      }
    }
    if( parity ) {
      cout << i << "," << count << endl;
      count++;
    }
  }
  cout << count <<endl;
  return(0);
}

int base(long long unsigned x) {
  int ctr=1;
  for (;x>9;ctr++) {
    x/=10;
  }
  return(ctr);
}

bool prime( long long unsigned x ) {
  if (!(x%2)) {return(0);}
  for ( long long unsigned i = 3; i<x;i+=2) {
  if (!(x%i)){return(0);}}return(1);}

long long unsigned rotate( long long unsigned x) {
  long long unsigned sum = 0;
  int ctr = 1;
  for (;x>9;ctr++){
    sum+=(x%10)*pow(10,ctr);
    x /=10;
  }
  return(sum+x);
}

long long unsigned lp( long long unsigned x , int rc ) {
  for (;rc;rc--) {
    //cout << x << endl;
    x = rotate(x);
  }
  return(x);
}
    
  
