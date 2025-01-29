# we can use '' or "" for strings, it doesn't matter

# to print ' or ", we have to use escape sequence / or we have to enclose single quotes in double or vice versa

print("Hello, \" printing double quotes by escape sequence") 
print('Hello, " printing double quotes by enclosing it in single quotes')

# To ensure the character after \ isn't interpreted as a special character, use r before the first quote
print("\some\name")
print(r"\some\name")

# we can use """ """ for multiline strings, new line is automaically included but it can be removed by using \

print("""Okay so writin
      some stuff
      after this new line don't come \
      hushaisd""")

# we can concatenate strings by using str1 + str 2 or we can also just put two string literals next to each other

print('okay'' it works')
print('retry'
      'huha')
print(3*"umm"+ " Hello") # we can simply use int*str to repeat a string and + to concatenate as mentioned

stro = "try"
stro = " change try"
print(stro)

rgb = ["Red", "Green", "Blue"]
rgba = rgb
print(id(rgb))
