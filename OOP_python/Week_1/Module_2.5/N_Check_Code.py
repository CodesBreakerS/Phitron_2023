n,m = map(int,input().split())
while True:
    try:
        a,b= input().split('-')
        if n == len(a) and m == len(b):
            print('Yes')
        else:
            print('No')
        break
    except ValueError:
        print('No')
        break


# if n+m+1 == len(a) and a[n] == '-':
#     print('Yes')
# else:
#     print('No')
