import pyautogui as pa
n = int(input("Entter number of rows: "))

for i in range(n):
    for j in range(i+1):
        pa.write("*")
    pa.press('enter')

