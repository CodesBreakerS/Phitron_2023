a,b = map(int,input().split(' '))
# print(type(a))
i=a
l = []
for i in range(i,b+1):
    n=i
    c = False
    while(n!=0):
        if(n%10 ==4 or n%10 == 7):
            n=n//10 
            c = True
            # print(n)
        else:
            c = False
            break
    if(c == True):
        l.append(i)
# print(l)
if(len(l) == 0):
    print('-1')
else:
    for j in l:
        print(j,end=' ')
    # print(l)