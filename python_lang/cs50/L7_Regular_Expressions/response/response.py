
from validator_collection import validators, checkers

email = input("What's your email address? ")
if checkers.is_email(None):
    print("Valid")
else:
    print("Invalid")    
