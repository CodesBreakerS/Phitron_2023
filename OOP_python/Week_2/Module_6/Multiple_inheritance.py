class addr:
    def __init__(self,address) -> None:
        self.address = address
        
    def __repr__(self) -> str:
        return f'she lives in {self.address}'

class sports:
    def __init__(self,game) -> None:
        self.game = game
    def __repr__(self) -> str:
        return f'she plays {self.game}'

class student(sports,addr):
    def __init__(self,name,address,game) -> None:
        sports.__init__(self,game)
        addr.__init__(self,address)
        self.name = name
        
    def __repr__(self) -> str:
        print(f"My name is {self.name}")
        return sports.__repr__(self) + ' and \n' + addr.__repr__(self)
    # def __repr__(self) -> str:    
        # return f"My name is {self.name} ,{sports.__repr__(self)},{addr.__repr__(self)}"
        

# stu = student("meje","ctg","ludu")
# print(stu)
print(student("meje","ctg","ludu"))