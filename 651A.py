x,y = map(int, input().split())

if x == 1 and y ==1:
    print(0)
else:
    a = max(x, y)
    b = min(x, y)

    c = 0
    while a != 0 and b != 0:
        a -= 2
        b += 1
        if a <= 2:
            a, b = b, a
        c += 1

    print(c)