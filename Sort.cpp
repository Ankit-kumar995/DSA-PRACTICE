#include<iostream>
using namespace std;

void printarr(int arr[] , int n){
     for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}
// this is in asecending order

void bubbleSort(int arr[], int n ){
    for(int i=0;i<n-1;i++){
        for(int j=0; j<=n-i-1;j++){
            if(arr[j]> arr[j+1]){
               swap(arr[j],arr[j+1]);
            }
        }
    }

    printarr(arr,n);
}

// this in descending order

void bubbleSort1(int arr[], int n ){
    for(int i=0;i<n-1;i++){
        for(int j=0; j<=n-i-1;j++){
            if(arr[j]< arr[j+1]){
               swap(arr[j],arr[j+1]);
            }
        }
    }

    printarr(arr,n);
}

//Selection Sort 
//idea : pick the smalest (from unsorted) & put in the begiining.
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }

    printarr(arr,n);
}

int main(){
    int arr[6]={4,5,1,7,3,8};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
}