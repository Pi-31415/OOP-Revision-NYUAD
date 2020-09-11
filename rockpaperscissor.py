# uses Python 3.6

import random
# User interface
while(1==1):
    print("\n\nRock,Paper, Scissor game")
    choices = ["Rock", "Scissor", "Paper"]
    print("1 = Rock")
    print("2 = Scissor")
    print("3 = Paper")
    # https://www.w3schools.com/python/python_user_input.asp

    # Get input from user, only accept integer with python error handling

    try:
        user_choice = int(input("Choose a number:"))-1
        if(user_choice > 2):
            user_choice = int(input("Please choose from 1,2 and 3 only :"))-1
        elif(user_choice < 0):
            user_choice = int(input("Please choose from 1,2 and 3 only :"))-1
    except:
        user_choice = input("Please enter number only :")

    # make computer choose Rock, paper or scissor randomly
    computer_choice = random.randrange(0,3,1)

    print("\n\nYou : "+ str(choices[user_choice]))
    print("Computer : "+ str(choices[computer_choice]))

    if(computer_choice - user_choice == 0):
        print("Tie")
    elif(computer_choice - user_choice == 1):
        print("You Win")
    elif(computer_choice - user_choice == -1):
        print("You Lose")
    elif(computer_choice - user_choice == -2):
        print("You Win")
    elif(computer_choice - user_choice == 2):
        print("You Lose")
    else:
        print("Tie")
