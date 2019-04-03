
#include <iostream>
#include <cmath>

using  namespace std;
int main()
{
    int j,i,n=0;
    double sn=0;
    i=0;
    int p=0;
    while (true)
    {

        i++;
        n=i+n;
        sn= sqrt(n);
        for( j=2; j<sn;j++ )
        {
            if(n%j==0)
            {
                p++;
            }
        }
        if (floor(sn)==sn){
         
            if(2*p+3>=500)break;
        } else
        {
            if(2*p+2>=500)break;
        }
        p=0;

    }



return 0;
}

