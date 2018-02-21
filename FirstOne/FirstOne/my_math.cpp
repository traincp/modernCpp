#include "my_math.h"


int MyMath::Add(int x, int y) {
	return x + y;
}

//Add two numbers and return the sum
int MyMath::AddPtr(int *a, int *b) {
	return *a+*b;
}

//Add two numbers and return the sum through the third pointer argument
void MyMath::AddVal(int *a, int *b, int *result) {
	*result = *a + *b;
	return;
}

//Swap the value of two integers
void MyMath::Swap(int *a, int *b) {
	int tmp{ 0 };
	tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

//Generate the factorial of a number and return that through the second pointer argument
void MyMath::Factorial(int *a, int *result) {
	*result = 1;
	for (int i = 1; i <= *a; i++) {
		*result *= i;
	}
	return;
}

//Add two numbers and return the result through a reference parameter
void MyMath::AddRef(int a, int b, int &result) {
	result = a + b;
	return;
}
//Find factorial of a number and return that through a reference parameter
void MyMath::Factorial(int a, int &result) {
	result = 1;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
	return;
}
//Swap two numbers through reference arguments
void MyMath::Swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;

	return;
}

