# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

n = int(input())
num = input().split()
i = int(0)
while i<n:
    num[i] = int(num[i])
    i+=1
mn = min(num)
mx = max(num)
mni = num.index(mn)
mxi = num.index(mx)
num[mni] = mx
num[mxi] = mn
print(*num)
# print(f'min={mn}{mni} & max={mx}{mxi} ')
