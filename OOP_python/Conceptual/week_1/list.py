#multi dimentional list
 
a = [['a','b'],['c']]

for pr in a:
    for val in pr:
        print(val,end ="")
print()


my_list = [1,4,2,6,7]
my_list.sort()
print(my_list)
my_list.append(30)
print(my_list)
dele = my_list.pop(2)
print(dele,my_list)
# my_list.reverse()
print(my_list[::-1])   #   reverse 


