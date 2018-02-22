#include <iostream>
void Print(int *ptr) {
	using namespace std;
	cout << *ptr << endl;
}
void UsingConst() {
	using namespace std;
	float radius = 0;
	cin >> radius;
	const float PI = 3.14159f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	cout << "Area is : " << area << endl;
	cout << "Circumference is : " << circumference << endl;

	const int CHUNK_SIZE = 512;
	const int *const ptr = &CHUNK_SIZE;
	//*ptr = 1;
	int x = 10;
	//ptr = &x;
	//*ptr = 1;
	Print(&x);
	cout << "main->x" << x << endl;
}

void PrintRef(const int &ref) {
	using namespace std;
	cout << ref << endl;
	//ref = 10;
}
void UsingConstRef() {
	using namespace std;
	int x = 5;
	PrintRef(x);
	cout << "x: " << x << endl;
}
int main() {
	int x = 5;
	const int MAX = 12;
	int &ref_x1 = x;
	const int &ref_x2 = x;

	//Try to modify the pointer (e.g. ptr1) and the pointee value (*ptr1)
	const int *ptr1 = &x;
	int *const ptr2 = &x;
	const int * const ptr3 = &x;

	int test = 0;
	ptr1 = &test;

	//Find which declarations are valid. If invalid, correct the declaration
	const int *ptr3 = &MAX;
	const int *ptr4 = &MAX;

	const int &r1 = ref_x1;
	const int &r2 = ref_x2;

	const int *&p_ref1 = ptr1;
	const int *&p_ref2 = ptr2;

	
	//UsingConst();
	//UsingConstRef();
	
	return 0;
}














