#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int iDataJual[4][4];
	cout<<"Input Jumlah Penjualan"<<endl;
	cout<<"----------------------"<<endl;
	
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			cout<<"Data ke-"<<i<<"."<<j<<" : ";
			cin>>iDataJual[i][j];
		}
	}
	
	system("cls");
	cout<<"   Data Perjualan Pertahun  "<<endl;
	cout<<"============================"<<endl;
	cout<<"No.\t2017\t2018\t2019"<<endl;
	cout<<"============================"<<endl;
	for(int i=1; i<=3; i++){
		cout<<i<<"."<<"\t";
		for(int j=1; j<=3; j++){
			cout<<iDataJual[i][j]<<"\t";
		}
		cout<<endl;
	}
	cin.get();
	return 0;
}
