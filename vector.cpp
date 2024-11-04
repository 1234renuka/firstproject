#include<iostream>
#include<vector>//if vector use krna hai to uski file include lrna [padegi]
using namespace std;

int main(){
    vector<int>arr;


    // int ans =(sizeof(arr)/sizeof(char));
    // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    //insert

    // arr.push_back(5);
    // arr.push_back(6);

    // //print
    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";

    // }
    // cout<<endl;

    // arr.pop_back();
    

    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;

    // vector<int>brr(n);
    // cout<<"size of b "<<brr.size()<<endl;
    // cout<<"capacity of b "<<brr.capacity()<<endl;

    //     for(int i=0; i<brr.size(); i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    cout<<endl;
    vector<int>crr{10,20,30,40,50};

    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"vector crr is Empty or not "<<crr.empty()<<endl;
     
     
      vector<int> drr;
      cout<<"vector drr is empty or not "<< drr.empty()<<endl;
   
   
    return 0;
}