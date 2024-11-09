def student(name,clss,**extra):
    print(f"The students name is {name} and class is {clss}.")
    for key,value in extra.items():
        print(f'{key} : {value}',end=". ")

name,clss,rol,city = input().split()
info = student(name,clss,Roll=rol,City=city)
# info = student(name = "Irfan",clss = 12,roll = 15,City = "ctg")
