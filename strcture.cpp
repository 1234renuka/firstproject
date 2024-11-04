#include<iostream>
using namespace std;

struct employee


    {
        int epId;
        char favChar;
        float salary;
    };

int main(){
    struct employee renuka;
    renuka.epId =2;
    renuka.favChar ='p';
    renuka.salary =23400;
    cout<<renuka.epId<<endl;
    cout<<renuka.favChar<<endl;
    cout<<renuka.salary<<endl;
    return 0;
}