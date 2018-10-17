#include <iostream>

using namespace std;

int main()
{

	int  a, b;
	cout << "Podaj a:";
		cin >> a;
	cout << "Podaj b:";
		cin >>b;
	cout << "a+b=" << a + b <<endl;
	cout << "a-b=" << a - b <<endl;
	cout << "a*b=" << a*b <<endl;
	cout << "a/b=" << a / b << endl;
	cout << "a%b=" << a%b << endl;
	cout << "a^b=" << pow(a,b) <<endl;
	system("pause");
	return 0;

}