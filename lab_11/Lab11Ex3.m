%Prompts the user for the dimensions of a rectangle and prints the area of the rectangle on the output screen 
%Lab 11 Programming Exercise 3
clc;

fprintf('This script prints the value of sine \n')
fprintf('in radians or degrees\n')

angle = input('Enter angle: ');

choice = input("Enter r for radians, d for degrees : ", 's');

if choice=='r'
    answer = sin(angle);
    fprintf('Sine of %.1f degrees is %.1f\n',angle,answer)
elseif choice == 'd'
    answer = sind(angle);
    fprintf('Sine of %.1f radians is %.1f\n',angle,answer)
else 
    disp("Choice Invalid")
end