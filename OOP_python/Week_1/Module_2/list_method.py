# list 

number = [12, 23, 50, 61, 80, 14, 98]
print(number)
number.append(25)
print(number)
number.insert(2,80)
print(number)
out = number.pop()
print(out, number)

number.remove(12)
print(number)

if 14 in number:
    bt = number.index(14)
    print(bt , number)
if 5 in number:
    re = number.remove(68)
if 5 in number:
    re = number.remove(61)

# number.sort()
print(number)
sr = number.sort()
print(number)

number.reverse()
print(number)
# cnt = number.__sizeof__()
# print (cnt)
total = number
print(total)
