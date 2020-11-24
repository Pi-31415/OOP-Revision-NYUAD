clc;

%Lab 11 Exercise 1 Solutions (Command Line)
%Exercise 1

%{
    Anticipated Answers
    1\2 = 2
    -5^2 = 25 (got it wrong)
    (-5)^2 = 25
    10-6/2 = 7
    5*4/2*3 = 30
%}

disp("Exercise 1")
disp(1\2)
disp(-5^2)
disp((-5)^2)
disp(10-6/2)
disp(5*4/2*3)

%Exercise 2
disp("Exercise 2")
disp("2(a) Generating Random Numbers")
X = rand;
disp(X)

disp("2(b) Generating Random Numbers from 0 to 1")
X = rand;
disp(X)

disp("2(c) Generating Real Numbers from 0 to 100")
X = rand*100;
disp(X)

disp("2(d) Generating Real Numbers from 20 to 35")
X = randi([20,34])+rand;
disp(X)


disp("2(e) Generating Integers from 1 to 100")
X = randi([1,100]);
disp(X)

disp("2(f) Generating Integers from 20 to 35")
X = randi([20,35]);
disp(X)


%Exercise 3
disp("Exercise 3")

disp("3(a) Vector Addition")
A = 1:5;
B = 0.1:0.1:0.5;
C = A + B;

disp("A = ")
disp(A)
disp("B = ")
disp(B)
disp("C = A + B, C = ")
disp(C)

disp("3(b) Vector Subtraction")
A = 1:5;
B = 0.1:0.1:0.5;
C = A - B;

disp("A = ")
disp(A)
disp("B = ")
disp(B)
disp("C = A - B, C = ")
disp(C)

disp("3(c) Element by Element multiplication")
A = [1 2 3];
B = [4 5 6];
C = A .* B;

disp("A = ")
disp(A)
disp("B = ")
disp(B)
disp("C = A .* B, C = ")
disp(C)

disp("3(d) Element by Element division")
A = [2 4 6];
B = [2 2 2];
C = A ./ B;

disp("A = ")
disp(A)
disp("B = ")
disp(B)
disp("C = A ./ B, C = ")
disp(C)

disp("3(e) Raise one of the vectors to the second power")
A = [2 4 6];
C = A .^ 2;

disp("A = ")
disp(A)

disp("C = A .^ 2, C = ")
disp(C)

disp("3(f) Create a 3 × 3 matrix and display the first row of and the second column on the screen.")

mat = [1:3;4:6;7:9];
disp(mat)
disp("Displaying 1st row only")
disp(mat(1,:))

disp("Displaying 2nd column only")
disp(mat(1:3,2))

%Exercise 4
disp("Exercise 4")
disp("4(a) Create Matrix")

mat = [1:4;44 9 2 11;5 4 3 2];
disp(mat);

disp("(b) Matrix Dimensions")
rows = size(mat,1);
columns = size(mat,2);
disp ("Rows: "+rows+", Columns : "+columns);

disp("(c) Total number of elements in the matrix is")
disp(rows * columns)

disp("(d) Assign the first column to zeros")
for n = 1:rows
    mat(n,1) = 0;
end
disp(mat);

disp("(e) Determine the maximum value in the matrix")
max = 0;
for n = 1:rows
    for m=1:columns
        if(mat(n,m) > max)
         max = mat(n,m);
        end
    end  
end

disp(max);

disp("(f) Determine the average of all columns in the matrix")

cumulative = cumsum(mat);

for n= 1:columns
    disp("Average of column "+n+" = "+(cumulative(3,n)/3));
end


disp("(g) Reshape the matrix to the dimensions 2 rows by 6 columns (check how the values are reorganized)")

reshapedmat = reshape(mat,[2,6]);
disp(reshapedmat);

%Exercise 5
disp("Exercise 5")
A = [1 4;3 3];
B = [1 2;-1 0];
disp("Matrix A");
disp(A);
disp("Matrix B");
disp(B);

disp("A.*B");
disp(A.*B);

disp("A*B");
disp(A*B);

disp("B*A");
disp(B*A);


