
import math

def z ( x ) :
    s = 0
    xcpy = x
    while(x):
        s  += math.factorial(int(x%10))
        x/=10
    return(xcpy==s)

fsum = 0
for i in range(10,20000000):
    if z(i):
        print(i)
        fsum+=i

print(fsum)
