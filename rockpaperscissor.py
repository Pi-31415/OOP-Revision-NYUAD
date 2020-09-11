#uses Python 3.6

import random
# User interface
while(true):
    print("Rock,Paper, Scissor game")
    choices = ["Rock","Scissor","Paper"]
    print("1 = Rock")
    print("2 = Scissor")
    print("3 = Paper")
    # https://www.w3schools.com/python/python_user_input.asp

    # Get input from user, only accept integer with python error handling

    try:
        user_choice = int(input("Enter username:"))-1
    except:
        user_choice = input("Please Enter a number :")

    # make computer choose Rock, paper or scissor randomly
    computer_choice = random.randrange(2)

    print(computer_choice - user_choice)
