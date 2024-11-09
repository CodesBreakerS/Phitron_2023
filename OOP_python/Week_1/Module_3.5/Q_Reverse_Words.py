# https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
num = input().split()
# print(text)
n = len(num)
i = int(0)
# print(n,type(num[1]))
def reverse(string):
    string = string[::-1]
    return string
while i<n:
    num[i] = reverse(num[i])
    i+=1
print(*num)
