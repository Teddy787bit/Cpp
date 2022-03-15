// CPP program to demonstrate working of
// reinterpret_cast
//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <iostream>
using namespace std;

int main()
{
	int* p = new int(65);
	char* ch = reinterpret_cast<char*>(p);
	cout << *p << endl;
	cout << *ch << endl;
	cout << p << endl;
	cout << ch << endl;
	return 0;
}
