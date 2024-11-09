class student:
    def __init__(self,name,id):
       self.name = name
    #    self.cls = cls
       self.id = id
    def __repr__(self):
        return f"Student name is: {self.name} and id:{self.id}"

class Teacher:
    def __init__(self,name,subject,id):
        self.name = name
        self.subject = subject
        self.id = id
    
    def __repr__(self):
        return f"Our teacher :{self.name} will take {self.subject}"

class School:
    def __init__(self,sname):
        self.sname = sname
        self.students = []
        self.teacher = []
    def add_student(self,name,id):
        id = len(self.students) + 1
        stu = student(name,id)
        self.students.append(stu)
    def enroll(self,name,fees):
        self.name = name
        if fees < 10000:
            return 'Sorry you don\'t have enough money'
        else:
            id = len(self.students) + 1
            stu = student(name,id)
            self.students.append(stu)                            
    def add_teacher(self,name,sub):
        self.name = name
        self.sub = sub
        id = len(self.teacher) + 1
        teacher = Teacher(name,sub,id)
        self.teacher.append(teacher)
    
    def __repr__(self):
        print(f"    -----------    {self.sname}   ------------")
        print("*************    Our Teachers   ***************")
        for teacher in self.teacher:
            print(teacher)
        print("*************   Our Students    ***************")
        for stu in self.students:
            print(stu)
        return ""
        
irfan = School("PHITRON")
irfan.add_teacher("rahat","Algo")
irfan.add_teacher("sifat","data str")
irfan.add_teacher("pius","python")
irfan.enroll("irfu",10000)
irfan.enroll("meje",20000)
print(irfan)        

 