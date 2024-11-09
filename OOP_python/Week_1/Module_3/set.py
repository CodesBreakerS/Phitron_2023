number_set = {10,25,36,1,2,3}
print(number_set)
number_set.add(45)
print(number_set)
number_set.remove(10)
print(number_set)
# number_set[1] = 5    set index cannot be changed
for item in number_set:
    print(item)
if 9 in number_set:
    print('9 ase')
elif 45 in number_set:
    print('45 ase')

A = {1,2,3}
B= {1,3,4,5,6}
print(A & B)
print(A|B)
