#include<iostream>
using namespace std;
struct movie{
    string title;
    int year;
};
int main(){
    movie *a,b;
    a=&b;
    cout << "Enter title: ";
    cin>>(*a).title;
    cout << "\nEnter year: ";
    cin>>(*a).year;
    cout << "\nYou have entered:\n";
    cout << (*a).title << " (" << (*a).year << ")\n";
    cout << &b << " (" << &b << ")";
}