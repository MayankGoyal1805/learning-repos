totalSeconds = int(input("Enter the no. of seconds: "))
hours = totalSeconds // 3600
minutes = (totalSeconds%3600) // 60
seconds = totalSeconds%60

print(f"{totalSeconds} seconds is :\n{hours} hours : {minutes} minutes : {seconds} seconds")