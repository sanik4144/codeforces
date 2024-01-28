n, d = map(int, input().split())
lst = list(map(int, input().split()))

m = int(input())

lst.sort()
sum = 0

for i in range(min(n,m)):
    sum += lst[i]

if(m>n):
    sum =  sum-((m-n)*d)

print(sum)
