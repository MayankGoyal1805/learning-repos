with open("./cs50/L6_File_I_O/names.txt", "r") as file:
    lines = file.readlines()

print(lines)
for line in lines:
    print("hello,", line)

