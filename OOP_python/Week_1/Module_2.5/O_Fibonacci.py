n = int(input())
a = []
a.append(0)
a.append(1)
if n>2:
    i=2
    for i in range(i,n):
        a.append(a[i-1]+a[i-2])
        # print(a[i])
        i+=1
    print(a[n-1])
else:
    print(a[n-1])


