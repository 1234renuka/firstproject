#include<iostream>
using namespace std;
// selection sort

// int main(){
//     for(i=0; i<n-1; i++){
//         int minIndex=i;
//     }
//     for(j=i+1; j<n; j++){
//         if(arr[j]<arr[minIndex]){
//             minIndex=j;
//         }
        
//     }

//     swap(arr[minIndex],arr[i]);
//     return 0;
// }

//**********Bubble sort ***********/

for(int i=0; i<n; i++){

    //for round 1 to n-1
      for(j=0; j<n-i; j++){

        //process element till
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
      }
}