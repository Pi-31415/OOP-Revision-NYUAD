#uses Python 3.6
import random
print("Rock,Paper, Scissor game")
choices = ["Rock","Paper","Scissor"]
print("1 = Rock")
print("2 = Paper")
print("3 = Scissor")
# https://www.w3schools.com/python/python_user_input.asp
# Get input from user, only accept integer with python error handling

try:
    user_choice = (choices[int(input("Enter username:"))-1])
except:
    user_choice = input("Please Enter a number :")

print(random.randrange(2))

print(user_choice)