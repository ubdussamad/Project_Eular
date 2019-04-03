#include <iostream>
#include <cmath>
using namespace std;

long long unsigned fact(long long unsigned x );
bool is_df( long long unsigned x);
int main  ( void )  {
  long long unsigned sum = 0;
  for ( long long int  i = 10; i<146;i++){
    cout << "I is: "<<i << "  | "  << fact(i)<< endl;
    if (is_df(i)) {
	cout << "GO" << endl; 
	sum+=i;
      }
  }
  cout <<  "The sum upto 1k-mil is: " << sum << endl;
  return(0);
}


long long unsigned fact (  long long unsigned x )  {
  long long unsigned sum = 1;
  for (;x;x--) {
    sum *= x;
  }
  //cout << " its fact is"<< sum;
  return(sum);
}

bool is_df ( long long unsigned x ) {
  long long unsigned sum = 0;
  long long unsigned xcpy = x;
  for(;!x;x--) {
    sum+=fact(x%(long long unsigned)10);
    x%=10;
  }
  //cout << "And sum is: "<< sum << endl;
  return(sum==xcpy);
}
