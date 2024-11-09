                                #DICTIONARY#
# key value pair
#dictonary
# object
# hash table
# overlap with set
p_data = {'name':'monita','mental health':'pagol','address':'choikka','nick name':'hakuma matata'}
print(p_data)
print(f'{p_data['name']} and {p_data['nick name']}')
print(p_data.keys())
print(p_data.values())
p_data['language'] = 'muchi mong'
print(p_data)
print(list(p_data))  # converting dictionary in list

for key,value in p_data.items():
    print(f'{key}:{value}',end='; ')
print('\n')
i = 1
for i,(key,value) in enumerate(p_data.items()):
    print(i,key,value)