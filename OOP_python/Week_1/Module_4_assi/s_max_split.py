input_s = input()

empty_s =''
ans = []
l_cnt =0
r_cnt =0
for x in input_s:
    if x == 'L':
        l_cnt+=1
        empty_s+=x
    if x == 'R':
        r_cnt+=1
        empty_s+=x
    
    
    if l_cnt == r_cnt:
        ans.append(empty_s)
        empty_s= ''
        l_cnt = 0
        r_cnt = 0
    

print(len(ans))
# for x in ans:
# print(*ans)
for item in ans:
    print(item)