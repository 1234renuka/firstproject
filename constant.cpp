#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   /* int a =78;
    char c= 'k';
    cout<<"the value of c was:"<<c<<endl;
    a =65;
    c = 'r';
    cout<<"the value of c is :"<<c<<endl;*/
    //constant in c++
    //const int a =9;
    /*cout<<"the value of a was:"<<a<<endl;
    a =10;
    cout<<"the value of a was:"<<a<<endl;// constant me value change nhi hogi variable ki*/

 /*int a = 0,b=5,c=99098;
  cout<<"the value of a without setw is :"<<a<<endl;
  cout<<"the value of b without setw is :"<<b<<endl;
  cout<<"the value of c without setw  is :"<<c<<endl;
  cout<<"the value of a with setw  is :"<<setw(5)<<a<<endl;
  cout<<"the value of b  with setw is :"<<setw(5)<<b<<endl;
  cout<<"the value of c with setw  is :"<<setw(5)<<c<<endl;*/

  //************ operator precedence*************

  /*int a =0,b=4,d;
  //int c =(a*5)+b;//isme precedence dekhna pdta hai ki kon phele ayega 
  int c=  ((((a*5)+b)-45)+87);//isme bhi prefrence dekhnege phir asociativity dekhenge 
   cout<<"the value of c is :"<<c;*/

/*int age;
   
   if((age<18)&&(age>0)){
      cout<<"You can not invite in  my party"<<endl;
   }else if(age==18){
      cout<<"you are a kid you get kid pass in the party"<<endl;
   }else if(age<1){
      cout<<"you are not yet born"<<endl;
   }
   else{
      cout<<"you can join the party"<<endl;
   }*/
   int age;
   cout<<"tell me  your age"<<endl;
   cin>>age;
   switch (age)
   {
   case 18 :
   cout<<"you are 18"<<endl;
      break;
   case 21:
   cout<<"you are 21"<<endl;
   break;
   case 2:
   cout<<"you are 2"<<endl;
   break;

   default:
   cout<<"no such special case"<<endl;
      break;
   }

  
    return 0;
}