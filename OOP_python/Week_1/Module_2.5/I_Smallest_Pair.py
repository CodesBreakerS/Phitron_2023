t = int(input())
while t>0:
    n = int(input())
    a = list(map(int,input().split()))
    mn = int(1e7+10)
    i = 0 
    for i in range(i,n-1):
        j = i+1
        
        for j in range(j,n):
            if i == j:
                continue
            else:
                sum = 0
                sum += (a[i]+a[j]+(j+1)-(i+1))
                mn = min(mn,sum)
                # print(i,j,sum,mn)
            
            j+=1
        i+=1
    print(mn)
    t-=1