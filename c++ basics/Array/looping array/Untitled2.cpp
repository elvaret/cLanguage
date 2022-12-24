#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main(){
	
	//looping array dengan cr 1
	int abc[5]={1,2,3,4,5};
	for(int i=0; i<=4; i++){
		cout<<abc[i]<<endl;
	}
	cout<<endl;
	// looping array dengan cr 2
	int arraycde[5]={6,7,8,9,10};
	for(int cde: arraycde){
		cout<<cde<<endl;
	}
	cout<<endl;
	//memanipulasi array dengan referensi
	for (int &cderef: arraycde){
		cderef *= 2;
	}
	cout<<endl;
	for(int &cderef: arraycde){
		cout<<"address: "<<&cderef<<"nilai: "<<cderef<<endl;
	}
	
    getch();
    return 0;
}
