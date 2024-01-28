n, b, p = map(int, input().split())
lst = list(map(int, input().split()))

n1 = 0
n2 = 0

for i in lst:
    if i == 1:
        n1 += 1
    else:
        n2 += 1

ans = 0

if n1 >= b:
    ans += (n1 - b)
else:
    p += (b - n1)

if n2 >= p:
    ans += (n2 - p)


print(ans)