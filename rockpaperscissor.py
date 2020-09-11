# uses Python 3.6

import random
import time

# https://www.w3schools.com/python/python_user_input.asp
print("Rock,Paper, Scissor game")
choices = ["Rock", "Scissor", "Paper"]
game_round = 1
computer_score = 0
user_score = 0

while(1 == 1):
    # User interface
    print("\n---------------------------------------\n")
    print("Round "+str(game_round)+"\n")
    print("1 = Rock\t\t\tScore")
    print("2 = Scissor\t\t\tUser : "+str(user_score))
    print("3 = Paper\t\t\tComputer : " + str(computer_score)+"\n")
    # Get input from user, only accept integer with python error handling
    try:
        user_choice = int(input("Choose a number : "))-1
        if(user_choice > 2):
            user_choice = int(input("Please choose from 1,2 and 3 only : "))-1
        elif(user_choice < 0):
            user_choice = int(input("Please choose from 1,2 and 3 only : "))-1
    except:
        user_choice = int(input("Please enter number only : "))-1

    # make computer choose Rock, paper or scissor randomly, by making it select a random integer between 0 and 2
    computer_choice = random.randint(0, 2)

    print("\n\nYou : " + str(choices[user_choice]))
    print("Computer : " + str(choices[computer_choice]))
    
    time.sleep(1)

    if(computer_choice - user_choice == 0):
        print("Tie")
    elif(computer_choice - user_choice == 1):
        print("You Win")
        user_score += 1
    elif(computer_choice - user_choice == -1):
        print("You Lose")
        computer_score += 1
    elif(computer_choice - user_choice == -2):
        print("You Win")
        user_score += 1
    elif(computer_choice - user_choice == 2):
        print("You Lose")
        computer_score += 1

    game_round += 1
    time.sleep(1)