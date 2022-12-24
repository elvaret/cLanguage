#include <iostream>
#include <conio.h>
using namespace std;
int kuadrat(int x){
	int y;
	y = x*x;
	return y;
}
void tampilkan(int input){
	cout<<"Hasil: ";
	cout<<input<<endl;
}

int main(){
	int hasil, input;
	cout<<"Masukkan angka: ";
	cin>>input;
	
	hasil = kuadrat(input);
	tampilkan(hasil);

	
	cin.get();
	return 0;
	getch();
}
