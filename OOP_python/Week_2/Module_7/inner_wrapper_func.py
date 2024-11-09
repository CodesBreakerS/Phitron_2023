#    inner function
def coding():
    print('Python')

    def inner_coding():
        return f'january te shuru korbo'
    return inner_coding
# print(coding())
print(coding()())

def programme(lan1):
    print('I am learning')
    print(lan1())
    # lan()
    #   print('for data science.')
    return 'for data science.'

def lan():
    return 'django'
    # return 'Python'

a = programme(lan)
print(a)
