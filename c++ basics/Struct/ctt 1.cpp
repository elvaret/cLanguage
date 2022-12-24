#include <iostream>
using namespace std;
struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};
int main(){
	buah durian;
	durian.warna = "hijau";
	durian.berat = 1.0f;
	durian.harga = 100000;
	durian.rasa  = "manis";
	
	cout<<"Ciri-ciri buah durian"<<endl<<endl;
	cout<<"warna durian = "<<durian.warna<<endl;
	cout<<"berat durian = "<<durian.berat<<" kg"<<endl;
	cout<<"harga durian = "<<"Rp "<<durian.harga<<endl;
	cout<<"Rasa durian  = "<<durian.rasa<<endl;
	

	return 0;
}
