import csv
name = input("What's your name? ")
home = input("What's your home? ")

with open("./cs50/L6_File_I_O/students.csv","a") as file:
    reader =  csv.DictWriter(file,fieldnames=["name","home"])
    reader.writerow({"name":name,"home":home})











# students = []
# with open("./cs50/L6_File_I_O/students.csv") as file:
#     reader = csv.DictReader(file)
#     for row in reader:
#         students.append(row)

# for student in sorted(students, key=lambda student:student["name"]):
#     print(f"{student['name']} is in {student['home']}")  
