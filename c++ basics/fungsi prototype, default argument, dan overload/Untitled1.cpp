#include <iostream>
#include <conio.h>
using namespace std;
//fungsi prototype
double hitung_volume(double panjang, double lebar, double tinggi = 1);//tinggi = 1 merupakan fungsi default argument / nilai standar
void println(double x);
int main(){
	double volume, panjang, tinggi, lebar;
	volume = hitung_volume(3, 4);
	println(volume);
	
	cin.get();
	return 0;
}
double hitung_volume(double panjang, double lebar, double tinggi){
	return panjang*lebar*tinggi;
}
void println(double x){
	cout<<"Hasil: "<<x<<endl;
}
