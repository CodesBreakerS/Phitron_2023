class Exam:
    
    def __init__(self, candidate):
        self.candidate = candidate
        self.mar = []       # This is class instance, it's helpful for Indivisual data
        self.cnt = 0
        
    def get_marks(self, sub, mark):
        num = {'Subject': sub, 'Mark': mark}
        self.mar.append(num)
        self.cnt += 1
        
    def grd(self,grade):
        if grade >= 80:
            print(f'Congratulations {self.candidate},you\'ve got A+')
        elif 70 >= grade < 80:
            print(f'Congratulations {self.candidate},you\'ve got A')
        elif 60 >= grade < 70:
            print(f'Congratulations {self.candidate},you\'ve got B')
        elif grade >= 50 and grade < 60:
            print(f'Congratulations {self.candidate},you\'ve got C')
        elif grade >= 40 and grade < 50:
            print(f"Congratulations {self.candidate},you\'ve got D")
        else:
            print("You failed.")

    def marksheets(self, att):
        grade = 0
        if att.lower() == 'yes':
            print(f'{self.candidate},Thank you for attending in Exam.')
            print(f'Here is your marks: ')
            mar = list(self.mar)
            for item in self.mar:
                grade += item['Mark']
                print(f'Subject:{item['Subject']}  Mark:{item['Mark']}')
            print('Your total mark is :', grade)
            # print(self.cnt)
            grade = grade//self.cnt
            self.grd(grade)
        else:
            print('You did not attend in Exam.')
# irfan = exam('Irfan')


student = int(input('Number of student: '))
for i in range(student):
    name = input('Name of the Student:')
    name = Exam(name)
    s = 0
    pre = input('Were you present in exam?(yes/no)\n')
    if pre.lower() == 'yes':
        while True:
            s = input("Subject Name(-1 to end):")
            if s == '-1':
                break
            m: int = int(input("Marks:"))
            name.get_marks(s, m)
        name.marksheets(pre)
    else:
        name.marksheets(pre)
print('\n')
