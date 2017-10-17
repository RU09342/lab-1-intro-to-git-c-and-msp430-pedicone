# Lab 1 - Introduction to C, Git, and the MSP430
#### Jack Pedicone
##### 10-14-2017

## Library Used
stdio.h - default library

## Dependencies
* Code Composer Studio

## File name
* math.c
* math.h

## Set Requirements
"The overall goal of this exercise is to generate a "math.c" and "math.h" file that can eventually be placed into an example UART Calculator code. You will be responsible for generating the function as prototyped in the "math.h" file provided, and include the capability to add, substract, multiply, integer divide, and modulus. This hopefully will be a simple task, and you will not need to worry about getting this specific code to run on your processor. So what you need to do to complete this is:"

#### Tasks
* [x] Create a math.h containing a calculator function, and have its functionality within main.c

### Detailed Description

* Initialize the "math.h" files to include the math function that uses two integers
* Include math.h and stdio.h, a default library, into main.c to allow it to function.
* Create a switch statement that detects what char operators have been entered
* Return the desired result based on the operator, and then break, which leaves the case statement
* By default the function will return "Invalid Operator" if any char other than the 5 indicated are entered.
* After leaving the switch statement, the program then performs a system pause.

#### Example Code
```C
switch (Operator)
	{
	case '+':					//when entered operator is '+'
		return(num1 + num2);	//return the addition of num1 and num2 
		break;					//leave the case statement
	case '-':				    
		return(num1 - num2); 
		break;
```