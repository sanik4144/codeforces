n = int(input())

x = n//2
count = n//4

i = 1
ans = 0

if n%2 != 0:
    print(ans)
else:
    while count > 0:
        a = x - i

        if a != i:
            ans += 1

        i += 1
        count -= 1

    print(ans)