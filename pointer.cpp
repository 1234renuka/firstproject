#include<iostream>
using namespace std;

int main(){
   
    int a =3;
    int* b =&a;
    cout<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the value of b is "<<*b<<endl;
    int** c=&b;
    cout<<"value of c is "<<**c<<endl;
    cout<<"ddd"<<&b;
    return 0;
}