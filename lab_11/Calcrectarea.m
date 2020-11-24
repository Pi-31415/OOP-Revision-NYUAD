%Prompts the user for the dimensions of a rectangle and prints the area of the rectangle on the output screen 
%Lab 11 Programming Exercise 2
clc;
fprintf('Calculate the area of rectangle \n')

width = input('Enter width: ');
height = input('Enter height: ');
area = width * height;

fprintf('Area of rectangle is %.1f\n', area)

