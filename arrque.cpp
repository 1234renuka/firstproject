#include<iostream>
#include<limits.h>
using namespace std;


//**********Linear search************

// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// } 
// void inc(int arr[],int size){   //always pass arr size also by passing arr 
//    arr[0]=arr[0]+10;
//    printArray(arr,size);
// }
// int main(){
//     int arr[] ={5,6};
//     int size =2;
//     inc(arr,size);

//     printArray(arr,size);
//     return 0;//pass by refrence me updation kr rahe hai
// }



//************Maximunm Number in array*********





// int main(){      



// int arr[] ={2,3,4,5,6,7,8,9};
// int size=8;
// int key =300;

// bool flag =0;
// for(int i =0; i<size; i++){
//    if(arr[i]==key){
    
//      flag =1;
//      break;
//    }
   
 
// }
//   if(flag)
//   cout<<"presnt"<<endl;
//   else
//   cout<<"not present"<<endl;
  
  
//   return 0;

// }

    // ***********counting of zeros and ones in array********





// int main(){

//     int arr[] ={0,1,1,1,1,0,0,0,1,1,1,1,0};

//    int size =13;
//     int numzero =0;
//     int numone =0;

//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             numzero++;
//         }
//         if(arr[i]==1){
//             numone++;
//         }

//     }

//     cout<<"number if zeroes"<<numzero<<endl;
//     cout<<"number of ones"<<numone<<endl;
// }

// int main(){
//      int arr[] = {-2,-9,-4,-5,-6,-48,-8,-9,-23,-54};

//     int size =10;
//     int maxi = INT_MIN;
//     for(int i=0; i< size; i++){
//         if(arr[i]>maxi){
//            maxi =arr[i];
//         }
//     }
//   cout<<"maximum number is "<<maxi<<endl;

//   return 0;

// }

  //**********Extream Print in array*********



// int main(){

// int arr[] ={3,4,56,76,78,54};
// int size =6;

// int start =0;
// int end=size-1;

// while(true){
//   if(start>end); // or start<=end to loop chalega
//    break;

//    if(start ==end){

//     cout<< arr[start]<<" ";
//    }
//    else{
//   cout << arr[start]<<" ";
//   cout << arr[end]<<" ";
//    }
//   start++;
//   end--;
// } 
// }


int main(){

  int arr[]={10,20,30,40,50,60,70};
  int size =7;

  int start =0;
  int end =size-1;

  while(start<=end){
    //step1:
    swap(arr[start],arr[end]);
    //step2:
    start++;
    //step 3:
    end--;
  }

  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}