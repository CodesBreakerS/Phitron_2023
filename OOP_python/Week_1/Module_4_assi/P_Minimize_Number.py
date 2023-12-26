t = int(input())
input_list = [int(n) for n in input().split()]
flag = True
cnt = 0
val = 2
while flag != False:
    for l in input_list:
        if l%2 ==0: 
            flag = True
        else: 
            flag = False 
            break
        
    if flag == True:
        input_list = [v//val for v in input_list]
        cnt+=1
    else:
        break 
    # print(input_list)
print(cnt) 