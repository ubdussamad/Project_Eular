count = 0

def rotate( x , rc ) :
    a = [i for i in str(x)]
    for i in range(rc):
        a = a[1:]+[a[0]]
    a = int(''.join(a))
    return(a)
        
    
def prime(x):
    if not(x%2):
        return(0)
    for i in range(3,x,2):
        if not(x%i):
            return(0)
    return(1)

z = open('/home/samad/nums','r')
x = z.read()
x = map(int,x.split('\n'))

#rotate -> test prime -> check
def f(i):
    l = len(str(i))
    z = []
    for j in range(l):
        z.append(prime(rotate(i,j)))
    if all(z):
        return(1)
    return(0)
c = 0
for i in x:
    if f(i):
        c+=1

print(c)
