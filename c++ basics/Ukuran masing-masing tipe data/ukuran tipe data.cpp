#include <iostream>
#include <limits>

using namespace std;

int main(){
	//bilangan bulat
	int a = 5; // 32 bit
	// unsigned int a = 5
	//unsigned berfungsi sebagai penghilang tanda '-'
	long b = 6;
	short c = 7;
	//bilangan decimal
	float d = 1.0;
	double e = 2.5;
	//character
	char f = 'a';
	//boolean
	bool g = true
	cout << b << endl;
	cout << sizeof(b) <<"byte"<< endl;
	cout << numeric_limits <long >::max()<<endl;
	cout << numeric_limits <long >::min()<<endl;
	cin.get();
	return 0;
}
