%Plotting exp(x) and log(x) 
%Lab 11 Programming Exercise 1

clc;

x = 0:0.01:3.5;
y1 = exp(x);
y2 = log(x);

plot(x,y1,x,y2)
