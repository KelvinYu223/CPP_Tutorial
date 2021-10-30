#include<iostream>
using namespace std;
int main(){
    int v[3] = {10, 100, 200};
    int *a;
    a=v;
    cout << "Value at ptr = " << a << "\n";
    cout << "Value at *ptr = " << *a << "\n";
    a++;
    cout << "Value at ptr = " << a << "\n";
    cout << "Value at *ptr = " << *a << "\n";
    a++;
    cout << "Value at ptr = " << a << "\n";
    cout << "Value at *ptr = " << *a << "\n";
}