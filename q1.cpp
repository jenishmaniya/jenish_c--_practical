//Write a C++ program to print factorial series using recursion.
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){ 
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main(){
    int n,i;
    cout << "Enter a number:";
    cin >> n;
    cout << "Factorial:";
    for (i=0;i<=n;i++) {
        cout <<  " " << factorial(i);
    }
    return 0;
}
