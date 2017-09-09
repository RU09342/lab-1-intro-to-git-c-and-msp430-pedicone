Assignment 1: README
Author: Jack Pedicone
Created Sep 8, 2017
Updated Sep 8, 2017

#include <stdio.h> was needed to allow the printf declaration to suceed.

The function "math" was initialized before the int main similar to how it would be in c++. The main function begins as normal.

As the instructions did not ask for anything other than the working functions, I preset the values of num1, num2, and the operator. Testing with different values and operators led to bugged answers during my first test, which will be brought into more detail later.

The math function is then performed using num1, num2, and the operator, and its value is stored onto the int ret. The program ends when the printf declaration is completed and it reaches return 0.

I realized while creating the math function that all 3 values that it requires are inputs, so it was necessary for me to create an output variable within the function. I called this variable "result" and set it as an integer. 

I decided to go the simpler route of using if/else statements based on the different values "Operator" could be. One mistake I did not catch until I was ready to test my code was that I forgot to double my equals signs within the if statements' condition. All of my results ended up being equal to num1 plus num2.

After creating the five if statements, I returned the value of result to int main, where it would then be printed out and the program would finish.