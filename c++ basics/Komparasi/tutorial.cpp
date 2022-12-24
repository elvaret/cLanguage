#include <iostream>
using namespace std;
int main(){
	//Komparasi
	int a = 5;
	int b = 3;
	bool hasil1, hasil2, hasil3, hasil4;
	//sama dengan
	hasil1 = (a==b);
	//tidak sama dengan
	hasil2 = (a!=b);
	//kurang dari sama dengan;
	hasil3 = (a<=b);
	//lebih dari sama dengan;
	hasil4 = (a>=b);
	cout << hasil1 << endl;
	cout << hasil2 << endl;
	cout << hasil3 << endl;
	cout << hasil4 << endl;
	cin.get();
	return 0;
}
