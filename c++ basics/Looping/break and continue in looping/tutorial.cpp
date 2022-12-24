#include <iostream>
using namespace std;
int main(){
	//break dengan for
	cout << "Break dengan for"<<endl;
	for(int i = 5; i<=10; i++){
		if(i==8){
			break;
		}
		cout << i << endl;
	}
	cout << "\ncontinue dengan for"<<endl;
	for(int i = 5; i<=10; i++){
		if(i==8){
			continue;
		}
		cout << i << endl;
	}
	cout << "\ncontinue dengan while"<<endl;
	int i = 5;
	while(i<=10){
		i++;
		if(i==8){
			continue;	
		}
		cout << i << endl;
		
	}
	
	
	
	
	
	cout << "Looping selesai"<<endl;
	cin.get();
	return 0;
}
