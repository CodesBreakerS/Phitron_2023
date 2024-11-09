n = int(input())
a = list(map(int,input().split()))

mx = max(a)
# print(mx)
mn = min(a)
# print(mn)
c1 = a.index(mx)
c2 = a.index(mn)
a[c1] = mn
a[c2] = mx
# print(c1,c2)
for i in a:   
    print(i,end=' ')