/*
 * math.h
 *
 *  Created on: Sep 8, 2017
 *	Last updated: Sep 8, 2017
 *      Author: Jack Pedicone
 */

#include <stdio.h>
#ifndef MATH_H_
#define MATH_H_

int math(int num1, int num2, char Operator);

int main(){
	
	int num1 = 4;
	int num2 = 2;
	char Operator = '/';
	int ret;
	
	ret = math(num1, num2,Operator);
	
	printf("Answer is : %d\n", ret);

return 0;
}

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator){
	int result;
	
	if (Operator == '+'){
		result = num1 + num2;
	}
	else if (Operator == '-'){
		result = num1 - num2;
	}
	else if (Operator == '*'){
		result = num1 * num2;
	}
	else if (Operator == '/'){
		result = num1 / num2;
	}
	else if (Operator == '%'){
		result = num1 % num2;
	}
	
	return result;
}

#endif /* MATH_H_ */