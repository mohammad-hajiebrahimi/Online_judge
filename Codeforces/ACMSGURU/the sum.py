k=int(input())
f=[0]*41
f[0]=1
f[1]=1
for i in range(2,k):
    f[i]=f[i-1]+f[i-2]
print(sum(f[0:k]))
