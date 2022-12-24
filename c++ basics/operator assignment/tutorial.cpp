#include <iostream>
using namespace std;
int main(){
	int a = 12;
	cout << "bilangan awal      " << a <<endl;
	/*operator assignment 1
	variabel = variabel operator ekspresi
	a.       =. a.         +        3
	
	operator assignment 2
	variabel operator = ekspresi
	a.         +=.        3
	
	*/
	a += 3;
	cout << "ditambah 3 menjadi " << a << endl;
	a -= 3;
	cout << "dikurang 3 menjadi " << a << endl;
	a /= 3;
	cout << "dibagi   3 menjadi " << a << endl;
	a *= 3;
	cout << "dikali   3 menjadi " << a  << endl;
	a %= 3;
	cout << "modulus  3 menjadi " << a << endl;
	
	cin.get();
	return 0;
}
