//Give an example which shows Exception handling of division by zero exception.
#include<iostream>
using namespace std;
int main(){
	int a,b,div;
	cout << "Enter the value of A:";
	cin >> a;
	cout << "Enter the value of B:";
	cin >> b;
	try {
		if(b==0){
			throw 0;
		}else{
			div=a/b;
			cout << "div is:" << div;
		}
	}
catch(...){
	cout << "it can't divide by zero..";
}
	return 0;
}



