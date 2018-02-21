#include <iostream>
#include "my_math.h"




void PrintChar(char ch) {
	using namespace std;
	for (int i = 0; i < 10; i++) {
		cout << ch;
	}
}

long Factorial(int n) {
	long result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}

void Print(int *ptr) {
	using namespace std;
	if (ptr != nullptr) {
		cout << "ptr val: " << *ptr << endl;
	}
}

void PrintRef(int &ptr) {
	using namespace std;
	cout << "ptr val: " << ptr << endl;
}

int main(void) {
	using namespace std;
	
	Print(nullptr);
	//PrintRef(nullptr);



#if 0
	cout << "Tell me your name" << endl;
	char nameBuffer[512];
	cin >> nameBuffer;
	cout << "Your name: " << nameBuffer;
#endif
	int i{};
	int j{ 4 };
	//float f{ j };
	initializer_list<int> list = { 1,2,3,4 };
	cout << i << ", " << endl;
	MyMath math;

	cout << math.Add(2, 5) << endl;
	PrintChar('#');

	int n = 5;
	cout << "Factorial of " << n <<  " is " << Factorial(n) << endl;
	

	int x = 10;
	cout << &x << endl;
	void *ptr = nullptr;
	ptr = &x;
	cout << ptr << endl;
	cout << *((int *)ptr) << endl;
	*((int *)ptr) = 5;
	cout << x << endl;

	int a = 2;
	int b = 13;

	cout << math.AddPtr(&a, &b) << endl;

	int c = 12;
	int &d = c;

	cout << "c: " <<  &c << endl;
	cout << "d: " << &d << endl;


	return 0;
}