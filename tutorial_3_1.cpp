#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n1;
    int square1;
    n1=8;
    cout << "address of n1 in main(): " << &n1 << "\n";
    square1=pow(n1,2);
    cout << "address of n1 in square1(): " << &square1 << "\n";
    cout << "Square of n1: " << square1 << "\n";
    cout << "No change in n1: " << n1 << "\n";
    int *n2;
    int square2;
    *n2=64;
    square2=*n2;
    cout << "address of n2 in main(): " << &n2 << "\n";
    cout << "address of n2 in square2(): " << &square2 << "\n";
    cout << "Square of n2: " << *n2 << "\n";
    cout << "Change reflected in n2: " << *n2 << "\n";
    int n3;
    int square3;
    n3=64;
    square3=n3;
    cout << "address of n3 in main(): " << &n3 << "\n";
    cout << "address of n3 in square3(): " << &square3 << "\n";
    cout << "Square of n3: " << n3 << "\n";
    cout << "Change reflected in n3: " << n3 << "\n";
}