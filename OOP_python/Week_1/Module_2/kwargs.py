def student(name,cls,**extra):
    print(f"The students name is {name} and class is {cls}.")
    for key,value in extra.items():
        print(key,value)


info = student(name = "Irfan",cls = 9,roll = 15,City = "ctg")