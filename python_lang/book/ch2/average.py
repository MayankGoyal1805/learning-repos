n = int(input("Enter the no. of students: "))
scores = [0]*n;
for i in range(n):
    print("Enter the",i+1,"student score: ",end="")
    scores[i] = float(input())

average = 0

for _ in range(n) :
    average += scores[_]

average /= n
print("The average score is",average)

  

