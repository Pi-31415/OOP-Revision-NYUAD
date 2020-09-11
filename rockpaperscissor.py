

print("Rock,Paper, Scissor game")
choices = ["Rock","Paper","Scissor"]
print("1 = Rock")
print("2 = Paper")
print("3 = Scissor")
# https://www.w3schools.com/python/python_user_input.asp

choice = raw_input("Enter username:")

try:
    print(choices[int(choice)-1])
except:
    choice = raw_input("Please Enter a number :")


