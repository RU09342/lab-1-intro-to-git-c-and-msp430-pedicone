#include <stdio.h>
#include "math.h"

//main.c by Jack Pedicone

int math(int num1, int num2, char Operator)
{

	switch (Operator)
	{
	case '+':					//when entered operator is '+'
		return(num1 + num2); 	//return the addition of num1 and num2
		break;					//leave the case statement
	case '-':
		return(num1 - num2); 
		break;
	case '*':
		return(num1 * num2); 
		break;
	case '/':
		return(num1 / num2); 
		break;
	case '%':
		return(num1 % num2); 
		break;
	default:
		return("Invalid operator");
	}
	system("PAUSE");
	return 0;
}