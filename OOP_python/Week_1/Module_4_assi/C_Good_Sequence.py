n = int(input())

input_list = [int(n) for n in input().split()]

dict1= {}
for num in input_list:
    if num in dict1:
        dict1[num]+=1
    else:
        dict1[num] = 1
cnt = int('0')
for d in dict1.keys():
        if  d <= dict1.get(d): 
            b =abs(d - dict1.get(d))
            cnt = cnt + b
        else:
            cnt = cnt + dict1.get(d)
print(cnt)