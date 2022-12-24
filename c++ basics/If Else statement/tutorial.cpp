#include <iostream>
using namespace std;
int main()
{
	int a;
	cout <<"Program dimulai" << endl;
	cout <<"masukkan nilai mahasiswa = ";
	cin >> a;
	
	// if else statement
	//kondisi dalam bentuk boolean
	if ( a >= 90 && a <= 100){
		cout <<"Mahasiswa mendapatkan nilai A" << endl;
	}else if (a >= 70 && a < 90){
		cout <<"Mahasiswa mendapatkan nilai B" << endl;
	}else if (a >= 50 && a < 70){
		cout <<"Mahasiswa mendapatkan nilai C" << endl;
	}else {
		cout <<"Mahasiswa tidak lulus mata kuliah ini" << endl;
	}
cout<<"Program selesai" << endl;
cin.get();
return 0;

}
