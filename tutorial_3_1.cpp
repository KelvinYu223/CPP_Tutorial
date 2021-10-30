#include<iostream>
#include<cmath>
using namespace std;

    int square1(int n1){
        n1 *=n1;
    };
    int square2(int *n2){
        *n2 *=*n2;
    };
    int square3(int &n3){
        n3 *=n3;
    };
int main(){
    int n1=8;
    int a;
    a=square1(n1);
    cout << "address of n1 in main(): " << n1 << "\n";
    cout << "address of n1 in square1(): " << &a << "\n";
    cout << "Square of n1: " << a << "\n";
    cout << "No change in n1: " << n1 <<"\n";
    int *n2;
    *n2=8;
    int b;
    b=square2(n2);
    cout << "address of n2 in main(): " << n2 << "\n";
    cout << "address of n2 in square2(): " << &b << "\n";
    cout << "Square of n2: " << b << "\n";
    cout << "Change reflected in n2: " << b << "\n";
    int n3;
    n3=8;
    int c;
    c=square3(n3);
    cout << "address of n3 in main(): " << &n3 << "\n";
    cout << "address of n3 in square3(): " << &c << "\n";
    cout << "Square of n3: " << c << "\n";
    cout << "Change reflected in n3: " << c << "\n";
}