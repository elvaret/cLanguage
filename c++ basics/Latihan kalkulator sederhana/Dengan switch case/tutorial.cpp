#include <iostream>
using namespace std;
int main(){
	cout<<"Kalkulator sederhana dimulai \n \n";
	float a, b, hasil;
	char aritmatika;
	cout<<"masukkan angka pertama: ";
	cin>>a;
	
	cout<<"masukkan operator(+,-,/,*): ";
	cin>>aritmatika;
	
	cout<<"masukkan angka kedua: ";
	cin>>b;
	
	cout<<"\nhasilnya adalah : ";
	switch(aritmatika){
		case '+':
		hasil = a + b;
		cout<<a<<aritmatika<<b<<"="<<hasil<<endl;
		break;
				
		case '-':
		hasil = a - b;
		cout<<a<<aritmatika<<b<<"="<<hasil<<endl;
		break;
				
		case '/':
		aritmatika == '/';
		hasil = a / b;
		cout<<a<<aritmatika<<b<<"="<<hasil<<endl;
		break;
				
		case '*':
		aritmatika == '*';
		hasil = a * b;
		cout<<a<<aritmatika<<b<<"="<<hasil<<endl;
		break;
		
		default:
			cout<<"operator tidak ditemukan"<<endl;
	}

	cout<<"Kalkulator sederhana selesai"<<endl;
	cin.get();
	return 0;
}
