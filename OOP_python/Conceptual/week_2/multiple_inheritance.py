class company:
    def __init__(self,cname,location) -> None:
        self.cname = cname
        self.location = location
    def company_deatails(self):
        print("company name =",self.cname,"Locaiton =",self.location)

class person:
    def __init__(self,pname,age) -> None:
        self.pname = pname
        self.age = age
    def person_details(self):
        print("Name: ",self.pname,"Age: ",self.age)

class employee(company,person):
    def __init__(self,emp_name,em_age,cem_name,cem_loc) -> None:
        person.__init__(self,emp_name,em_age)
        company.__init__(self,cem_name,cem_loc)
        
obj_emp = employee("MEJE",22,"microsoft","USA")

obj_emp.person_details()
obj_emp.company_deatails()
 