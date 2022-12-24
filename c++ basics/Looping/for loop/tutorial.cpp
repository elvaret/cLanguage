#include <iostream>
using namespace std;
int main(){
	//looping dengan for loop
	cout <<"loop 1 \n";
	for(int i = 2; i < 5; i++){
		cout << "i love u ";
		cout << i << endl;
		
	}
	cout <<"\nloop 1 \n";
	for(int i = 2; i < 5; i+= 2){
		cout << "i love u ";
		cout << i << endl; 
	}
	cout <<"\nloop 1 \n";
	for(int i = 2; i >= -1; i--){
		cout << "i love u ";
		cout << i << endl; 
	}
	cout <<"\nloop 1 \n";
	int total = 0;
	for(int i = 2; i < 5; i++){
		total += i;
		cout << i << "||" << total << endl;
	}
	
	cin.get();
	return 0;
}
