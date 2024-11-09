string = input()
n = len(string)
rev =str(string[::-1])
if string != rev:
    print(int(rev))   
    print('NO')
else:
    print(rev)
    print('YES')

