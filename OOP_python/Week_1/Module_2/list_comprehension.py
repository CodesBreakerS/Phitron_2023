number = [12, 24, 21, 98, 95, 67, 35, 10]
print(number)

# for num in number:
#     print(num)
odd = []
for num in number:
    if num%2 == 1 and num%5 == 0:
        odd.append(num)
print (odd)


player = ["irfan" , 'turfan', 'nirfan']
print(type(player))
print(player)
for plr in player:
    print(plr)
    
# comprenhension of list
odd_com = [num for num in number if num%5 == 0 if num%2 == 1]
print(odd_com)
 
player_com = [plyr for plyr in player]
print(player)