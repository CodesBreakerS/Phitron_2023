class pciu:
    def __init__(self,batch,sec) -> None:
        self.batch = batch
        self.sec = sec
        
    def __repr__(self) -> str:
        return f''

class course(pciu):
    def __init__(self, batch, sec,course) -> None:
        super().__init__(batch, sec)
        self.course = course
    
    def __repr__(self) -> str:
        print(f"Course Name:{self.course}.")
        return super().__repr__()

class mark(course):
    def __init__(self, batch, sec, course,mid,final) -> None:
        super().__init__(batch, sec, course)
        self.mid = mid
        self.final = final
    
    def __repr__(self) -> str:
        print(f"Mid term Marks:{self.mid}/30\nFinal term Marks:{self.final}/40")
        return super().__repr__()

class student(mark):
    def __init__(self,name, batch, sec, course, mid, final) -> None:
        super().__init__(batch, sec, course, mid, final)
        self.name = name
        
    def __repr__(self) ->None:
        print(f"Name: {self.name}\nBatch:{self.batch},Section:{self.sec}")
        return super().__repr__()

student = student("MEJE",27,'B',"OOP",28,35)
print(student)