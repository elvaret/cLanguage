#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main(){
	int a = 5;
	cout<<"addres a: "<<&a<<endl;
	cout<<"tampilkan value a: "<<a<<endl<<endl;
	fungsi(&a);
	cout<<endl;
	
	kuadrat(&a);
	cout<<"nilai a^2: "<<a<<endl;
	
	
	cin.get();
	return 0;
}
void fungsi(int *b){
	cout<<"addres b: "<<b<<endl;
	cout<<"tampilkan value b: "<<*b<<endl;
}

void kuadrat(int *valptr){
	*valptr=(*valptr)*(*valptr);
	cout<<"adress kuadrat: "<<valptr<<endl;
}
