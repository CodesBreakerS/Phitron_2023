#Encapsulation :- 
#Access Modifiers :- Public,Private,Proteced

class marks:
    def __init__(self,name,course,mid,final) -> None:
        self.name = name
        self.course = course #public attribute
        self.__mid = mid    #private attribute
        self._final = final #protected attribute
    def money(self):
        return self.__mid
stu = marks("Irfan",'OOP',28,35)
stu.__mid = 0        # NOone can't access the attribute  cause this is private
# stu._final = 0
print(stu.name,stu.course,stu.money(),stu._final)
stu.name = 'MEJE'    #Anyone can change the attribute cause this is public
stu.course = 'Algo'  #Anyone can change the attribute cause this is public
print(stu.name,stu.course,stu.money(),stu._final)