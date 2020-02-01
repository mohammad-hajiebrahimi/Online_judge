a=[i for i in range(1,21)]
print(a)
def all(b):
    j=1
    while True:
        j+=1
        c=0
        for i in range(20):
            if j%b[i]==0:
                c+=1
        if c==20:
            return j
        
print(all(a))
