import random 

class Hat:
    houses = ["Griffindor","Hufflepuff","Ravenclaw","Slytherin"]

    def sort(name):
        print(name,"is in",random.choice(Hat.houses))

Hat.sort("Harry")        