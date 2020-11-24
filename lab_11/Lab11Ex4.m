%calculates and prints the perimeter and area of a rectangle
%Lab 11 Programming Exercise 4
clc;
fprintf('Calculate the perimeter of rectangle \n')

width = input('Enter width: ');
height = input('Enter height: ');
perimeter = (2*width) + (2*height);

fprintf('Perimeter of rectangle is %.1f\n', perimeter)

