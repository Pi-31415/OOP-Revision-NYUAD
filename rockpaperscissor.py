

print("Rock,Paper, Scissor game")
choices = ["Rock","Paper","Scissor"]
print("1 = Rock")
print("2 = Paper")
print("3 = Scissor")
# https://www.w3schools.com/python/python_user_input.asp



try:
    user_choice = (choices[int(raw_input("Enter username:"))-1])
except:
    user_choice = raw_input("Please Enter a number :")


print(user_choice)