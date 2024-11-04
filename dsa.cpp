#include<iostream>
#include<iomanip>
using namespace std;

//     int arr[]={1,2,3,45,6};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     return 0;
// }
// for(int i=0; i<10; i++)
// cin<<arr[i];
// cout<<"printing the values in array "<<endl;
// for(int)
// int a,b;
// cout<<"Enter first  the number "<<endl;
// cin>>a;
// cout<<"Enter second the number "<<endl;
// cin>>b;
// cout<<"product of two number is : "<<a*b<<endl;

// int a,b,c;
// cout<<"enter the first side a : ";
// cin>>a;
// cout<<"enter the secomd side b : ";
// cin>>b;
// cout<<"enter the third side c :";
// cin>>c;
// cout<<" perimeter of triangle is : "<<a+b+c<<endl;
// bool checkvailidity(int a,int b,int c){
// if(a+b<=c || b+c<=a || c+a<= b){
//    return false;
// }
// else{
//    return true;
// }
//int main(){}
// }
//     int a = 8, b =10, c =7;
//     if(checkvailidity(a,b,c))
//     cout<<"vaild";
//     else
//     cout<<"invalid";
 int main(){
// int N;
// cout<<"enter the value of N : ";
// cin>>N;
// for(int i=0; i<=N; i++){
//     cout<<i<<endl;

// }

//typecasting 
//explicit example
// double d = 5.6;
// int x = (int)d +4;
// cout<<"the value of x is "<<x<<endl;

// //implicit example 
// char ch = 67;
// cout<< ch<<endl;

// int num ='C';
// cout<<num<<endl;
// for(int i=5; i>0; i=i-1){
//     cout<<i<<endl;
// }
// for(int i=1; i<10; i=i*2){
//     cout<<i<<endl;
// }
// for(int i=100; i>0; i=i/2)
// {
//     cout<<i<<endl;
// }
// for(int i=5; (i>=0 && i<=10); i=i+1){
//     cout<<i<<endl;
// }
// int n;
// if(cin>>n){
//     cout<<"Renuka "<<endl;;
// }
// if(cout<<"bubber"){
//     cout<<"love";
// }
// for(int i=1; i<=3; i++){
//     for(int j=1; j<=5; j++){
//         cout<<"* ";
//     }
//     cout<<" "<<endl;
// }
// int n;
// cout<<"enter the number of star";
// cin >>n;
// for(int i=0; i<n; i+=1){
//     for(int j=0; j<n; j+=1){
//         cout<<"*";

//     }
//     cout<<endl;
// }
//************doubt pattern solve again
// for(int i=0; i<=3; i++){
//     if(i==0||i==2){
//         for(int j=0; j<5; j++){
//            cout<<"* ";
//         }
//     }else{
//         cout<<"* ";

//         for(int i=0; i<3; i++){
//             cout<<" ";
//         }
        
//     }
//     cout<<" "<<endl;//doubt pattern end there 
// }
// int n;
// cout<<"enter the value of n :";
// cin>>n;
// for(int i=0; i<n; i++ ){
//     for(int j=0; j<i+1; j++){
//         cout<<"* ";
//     }
//     cout<<" "<< endl;
// }
// int n;
// cout<<"enter the value of n :";
// cin>>n;
// for(int i=0; i<n; i++){
//     for(int j=0; j<n-i; j++){
//         cout<<j+1 ;
        

//     }
//     cout<<endl;
// }

//simple interst *********
// int rate ,time , principle;
// rate =10;
// time = 1;
// principle = 10;
// cout<<"SI :  "<<rate*time*principle/100;

//factorial of a number 
// int N ;
// cout<<"enter the value of N :";
// cin>>N;

// if(N>=1){
//     cout<<factorial=factorial*N;

// }
int n;
cout<<"enter the value of n:";
cin>>n;
for(int i=0; i<n; i++){
    for(int j=0; j<=(2*n)-1; j++)
    {
    cout<<"*";

    }
    cout<<endl;
}
    
return 0;
}
