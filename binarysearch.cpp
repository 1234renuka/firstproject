#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start =0;
    int end =size-1;

    int mid =(start+end)/2;

    while(start<=end){
        int element =arr[mid];

        if(element ==target){
            return mid;
        }
        else if(target < element){
            //search left
            end =mid-1;
        }
        else{
            start =mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,12,14,16};
    int size =7;
    int target =34;

    int indexOftarget = binarySearch(arr, size,target);

    if(indexOftarget == -1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target found at "<<indexOftarget<<endl;
    }
    return 0;
}