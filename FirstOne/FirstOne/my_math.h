#pragma once
class MyMath {
public:
	int Add(int x, int y);


	//Add two numbers and return the sum
	int  AddPtr(int *a, int *b);
	void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
	void Swap(int *a, int *b);  //Swap the value of two integers
	void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument


	void AddRef(int a, int b, int &result);    //Add two numbers and return the result through a reference parameter
	void Factorial(int a, int &result);    //Find factorial of a number and return that through a reference parameter
	void Swap(int &a, int &b);            //Swap two numbers through reference arguments
};