class exam:
    
    def __init__(self,candidate):
        self.candidate = candidate
        self.mar = []       #this is class instance, its helpful for indivisual data
        self.cnt = 0
        
    def get_marks(self,sub,mark):
        num = {'Subject':sub, 'Mark':mark}
        self.mar.append(num)
        self.cnt += 1
        
    def grd(self,grade):
        if grade >= 80:
            print(f'Congratulations,you\'ve got A+')
        elif grade >= 70 and grade < 80:
            print(f'Congratulations,you\'ve got A')
        elif grade >=60 and grade < 70:
            print(f'Congratulations,you\'ve got B')
        elif grade >= 50 and grade < 60:
            print(f'Congratulations,you\'ve got C')
        elif grade >= 40 and grade < 50:
            print("Congratulations,you\'ve got D")
        else:
            print("You failed.")
        
    
    def marksheet(self,att):
        grade = 0
        if att == 'Present':
            print(f'{self.candidate},Thank you for attending in Exam.')
            print(f'Here is your marks: ')
            mar = list(self.mar)
            for item in self.mar:
                grade += item['Mark']
                print(f'Subject:{item['Subject']}  Mark:{item['Mark']}')
            print('Your total mark is :',grade)
            # print(self.cnt)
            grade = grade//self.cnt
            self.grd(grade)
        else:
            print('You did not attend in Exam.')

# irfan = exam('Irfan')
student = int(input('Number of student: '))
for i in range(student):
    name = input('Name of the Student:')
    name = exam(name)
    s =0
    pre = input('Was the student present?\n')
    if pre == 'Present':
        while True:
            s = input()
            if s == '-1':
                break
            m = int(input())
            name.get_marks(s,m)
        name.marksheet(pre)
    else:
        name.marksheet(pre)
        

print('\n')
