#include <iostream>
#include <conio.h>
using namespace std;
int main(){
		int i, saldo;
		float bunga;
	cout<<"masukkan saldo anda : ";cin>>saldo;
	for(i=1;i<=12;i++)
	{
		cout<<"\nBulan "<<i<<" = "<<saldo<<endl;
		bunga=saldo*0.02;
		saldo=bunga+saldo;
		cout<<"Bunga 2%"<<"= "<<bunga<<endl;
		cout<<"Total "<<i<<" = "<<" "<<saldo<<endl;
	}
	
	
	getch;
	cin.get();
	return 0;
}
