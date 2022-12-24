#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float a,b,hasil;
	
	char aritmatika;
	//Program kalkulator sederhana
	
	cout<<"Kalkulator sederhana dimulai \n \n";
	
	cout<<"masukkan angka pertama : ";
	cin>>a;
	
	cout<<"masukkan operator(+,-,/,*) : ";
	cin>>aritmatika;
	
	cout<<"masukkan angka kedua : ";
	cin>>b;
	
	cout<<"\nhasilnya adalah : ";
		if(aritmatika == '+'){
		hasil = a + b;
	}else if(aritmatika == '-'){
		hasil = a - b;
	}else if(aritmatika == '*'){
		hasil = a * b;
	}else if(aritmatika == '/'){
		hasil = a / b;
	}else{
		cout<<"operator tidak ditemukan"<<endl;
	}
	
	cout<<a<<aritmatika<<b<<" = "<<hasil<<endl;
	
	cout<<"Kalkulator sederhana selesai"<<endl;
	
	getch();
	
}
