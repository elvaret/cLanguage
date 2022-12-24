#include <iostream>
using namespace std;
int main(){
	long *p;
	long x;
	p=&x;
	x=10;
	cout<<"nilai x: "<<x<<endl;
	cout<<"nilai*p: "<<*p<<endl;
	cout<<"nilai p: "<<&p<<endl;
	cout<<"nilai &x: "<<&x<<endl;
	
	*p=200;
	cout<<"nilai x: "<<x<<endl;
	cout<<"nilai*p: "<<*p<<endl;
	cout<<"nilai p: "<<p<<endl;
	cout<<"nilai &x: "<<&x<<endl;
	
 return 0;
}
