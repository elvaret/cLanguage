#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Program mulai"<<endl;
	cout<<"masukkan angka = ";
	cin >> a;
	switch(a){
		case 1:
			cout<<"a = 1"<<endl;
			break;
		case 2:
			cout<<"a = 2"<<endl;
		case 3:
			cout<<"a = 3"<<endl;
		default:
			cout<<"default"<<endl;
	}
	cout<<"Program selesai"<<endl;
	
	cin.get();
	return 0;
}
