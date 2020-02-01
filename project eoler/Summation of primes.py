n = 2000000
A = [True] * n
i = 2
prime_sum = 0
while (i < n):
    if (A[i]):
        prime_sum += i
        j = i*i
        while (j < n): 
            A[j] = False
            j += i
    i += 1
print(prime_sum)

