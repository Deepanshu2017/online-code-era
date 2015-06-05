from math import sqrt
N = 600851475143
M = N
i = 2
N = int(sqrt(N)) + 1
real = []
is_prime = [0 for j in xrange(0,N)]
for i in xrange(2,N):
    if not is_prime[i]:
        real.append(i)
        print i
        j = i + i
        while j < N:
            is_prime[j] = 1
            j += i

i = 0
while M != 1:
    x = real[i]
    while not( M % x):
        M /= x
    i += 1
print x
