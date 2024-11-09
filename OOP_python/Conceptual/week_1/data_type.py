#string immutable
a = 'hello'
for ch in a:
    if ch == 'h':
        ch = 'g'
    print(ch,end='')
print()
#capitalize
b = 'phitron'
src = 'po'
index = b.find(src)
if index!=-1:
    print(f'{src} is found')
else:
    print('not found')

