
#include <iostream> //i/o library
using namespace std; //instead od prefix std::

int main() //header
{ //begin

	float a, res; //declaration
	//input
	cout << "a = ";
	cin >> a;
	//calculation
	res = a + 10;
	//output
	cout << "a+10 =" << res << endl;
	system("pause");
	return 0; //return to OS
} //end