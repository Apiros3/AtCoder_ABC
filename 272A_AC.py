
N = int(input())
A = list(map(int, input().split()))

sum = 0
for i in range(N) : 
    sum += A[i]

print(sum)