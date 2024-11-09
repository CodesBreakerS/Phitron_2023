# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

n,m = map(int,input().split())
num = input().split()
i = int(0)
sum = [0]*(n+1)

while i<n:
    num[i] = int(num[i])
    # if i ==0:
    sum[i+1] = sum[i]+num[i]
    i+=1

j = int(0)

while j<m:
    l,r = map(int,input().split())
    t = sum[r]-sum[l-1]
    print(t)
    j+=1
