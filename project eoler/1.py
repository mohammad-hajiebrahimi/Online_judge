def aloo(i):
    n=0
    while i!=0:
        w=i%10
        n=n*10+w
        i=i//10
    return n
print(aloo(123))
a=0
for i in range(999,100,-1):
    for j in range(999,100,-1):
        if i*j == aloo(i*j):
            if a<=i*j:
                a=i*j
            print(i*j)
            
