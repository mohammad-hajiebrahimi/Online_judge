a=[2]
s=2
r=1
while len(a)<10000:
    s+=1
    for i in range(len(a)):
        if s%a[i]==0:
            r=0
    if r:
        a.append(s)
        print(len(a),s)
    r=1
