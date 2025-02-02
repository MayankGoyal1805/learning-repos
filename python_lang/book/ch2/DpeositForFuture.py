future = float(input("Enter the desired future value: "))
time = float(input("Enter the number of years the money will grow: "))
rate = float(input("Enter the annual rate of interest: "))

principal = future / (1+rate)**time

print(f"You will need to deposit this amount: {principal:,.2f}")