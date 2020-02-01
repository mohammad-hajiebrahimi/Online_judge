for i in range(1,1000):
    for j in range(1,1000):
        c=i**2 +j**2
        if i+j+(c**0.5)==1000 and i<j:
            print('e',i*j*(c**0.5))
            break
