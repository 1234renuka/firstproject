#include<iostream>
using namespace std;

// void printName(){
//     int n;
//     cout<<"enter the value of n:"<<endl;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cout<<"babber"<<endl;
//     }
// }

// int main(){
//     //function call
//     printName();
    
    // void sumNum(){
    //     int a ,b;
    //     cout<<"enter the first  number : ";
    //     cin>>a;
    //     cout<<"enter the second number :";
    //     cin>>b;
    //     cout<<"sum of two no. is :"<<a+b<<endl;
    //     cout<<"sub of two no. is :"<<a-b<<endl;
    //     cout<<"multiply of two no. is :"<<a*b<<endl; 
    //     cout<<"divide of two no. is :"<<a/b<<endl;       
    // }
     
    
    //     sumNum();
    //     sumNum();
    //     return 0;

 

//  }
//  int add(int a, int b){
//     int result = a+b;
//     return result;
//  }
//  int main(){
//     int a ;
//     cout<<"enter the value a :"<<endl;
//     cin>>a;
//     int b;
//     cout<<"enter the value b:"<<endl;
//     cin>>b;
//     int sum = add(a,b);
//     cout<<"addition result is :"<<sum<<endl;

void maxNumber(){
   
  int findMax( int x ,inty,int z);
   if (x>y && x>z){
      return x;
      }else if(y>x && y>z){
         return y;
         
      }else{
         return z;
      }
}

int main(){
   int a ,b,c;
   cout<<"enter a"<<endl;
   cin>>a;
   cout<<"enter b"<<endl;
   cin>>b;
   cout<<"enter c"<<endl;
   cin>>c;
   int maxNumber =findMax(a,b,c);
   cout<<maxNumber<<endl;
}