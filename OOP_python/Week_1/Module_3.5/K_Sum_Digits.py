# https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

n = int(input())
num = list(input())
# print(a)
i = int(0)
sum = int(0)
while i < n:
    num[i] = int(num[i])
    sum+=num[i]
    i+=1

print(sum)