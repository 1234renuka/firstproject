#include<iostream>
#include<vector>
using namespace std;


// int findUnique(vector<int>arr){
//     int ans =0;

//     for(int i=0; i<arr.size(); i++){
//         ans =ans^arr[i];
//     }
//     return ans;
// }

// int main(){
  
//   int n;
//   cout<<"enter the size of array "<<endl;
//   cin>>n;
//     vector<int>arr(n);
//   cout<<"enter the elements";
//   for(int i =0; i<arr.size(); i++){
//     cin>>arr[i];

//   }
//   int unqueElement = findUnique(arr);
//   cout<<"unique element is :"<<unqueElement<<endl;
//     return 0;


// }
   
  //  *********union ********

// int main(){
 
//      int arr[] ={1,3,5,7,9};
//      int sizea =5;
//      int brr[] ={2,4,6,8};
//      int sizeb =4;
    
//     vector<int> ans;

//     for(int i=0; i<sizea; i++){
//       ans.push_back(arr[i]);
//     }

//     for(int i=0; i<sizeb; i++){
//       ans.push_back(brr[i]);
//     }

//     cout<<"printing ans array"<<endl;
//     for(int i=0; i<ans.size(); i++){
//       cout<<ans[i]<<" ";
//     }

//     return 0;
// }

// **********intersection*************
// int main(){
// vector<int>arr{1,2,3,4,5,6,8};
// int sizea =7;
// vector<int>brr{3,4,49,80};
// int sizeb =4;

// vector<int>ans;

// for(int i=0; i<arr.size(); i++){
//   int elment =arr[i];

//   for(int j=0; j<brr.size(); j++){
//        if(elment ==brr[j]){
//         ans.push_back(elment);
//        }
//   }
// }

//   for(auto value: ans){
//     cout<<value<<" ";
//   }


//   cout<<endl;


//   return 0;
// }

//************pair sum*********

// int main(){
//   vector<int>arr{10,20,40,60,70};
//   int sum =80;

//   for(int i=0; i<arr.size(); i++){
//     int element =arr[i];

//     for(int j=i+1; j<arr.size(); j++){
//       cout<<"("<<element<<","<<arr[j]<<")"<<endl;

//       if(element+arr[j]==sum){

//         cout<<"pair found"<<element<<","<<arr[j]<<endl;
//       }
//     }
//   }

//   return 0;
//}

// *********triplet pair sum***********
int main(){
vector<int>arr{10,20,30,40};
int sum =80;
for(int i=0; i<arr.size(); i++){
  int element1 =arr[i];

  for(int j=i+1; j<arr.size(); j++){
    int element2=arr[j];

    for(int k=j+1; k<arr.size(); k++){
      int element3 =arr[k];

      if(element1+element2+element3==sum){
        cout<<element1<<","<<element2<<" ,"<<element3<<endl;
      }
    }
  }
}

return 0;
}