#include<iostream>
using namespace std;
int q1(){
    int arr[5];
    
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter a number";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

//Q.Find the largest number in array              

int q2(){
    int arr[5]={5,7,8,12,10};
    int n=sizeof(arr)/sizeof(int);

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max value is ="<<max;
}

//Q.Find the minimum value of in Array

int q3(){
    int arr[5];
    int n=sizeof(arr)/sizeof(int);
    cout<<"Enter the Number";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int min=arr[0];

        for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum value is ="<<min;
}

//Array passed by refrence
void func(int arr[]){        
    arr[0]=1000;
}
void func1(int *ptr){
    ptr[0]=1000;
}

/*int main(){
   int a=5;
   int *ptr=&a;
   cout<< ptr <<endl;

   int arr[]={1,2,3,4,5};
   int n=sizeof(arr) / sizeof(int);

   func(arr);//passing array name equvalent to pointer
   cout<<arr[0]<<endl;
   return 0;
}
   */

void printarr(int nums[],int n){
    
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
}

//lenear search

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
  return -1;
}

//reverse an Array

void printarr1(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

/*int main(){
    int arr[]={12,5,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    
    int copyArr[n];
    for(int i=0;i<n;i++){
        int j= n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i=0;i<n;i++){
        arr[i] = copyArr[i];
    }
    printarr1(arr,n);
    return 0;
}*/

//reversearray two pinter approach
 /*int main(){
    int arr[]={12,5,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    int start=0, end=n-1;

    while(start < end){
        int temp=arr[start]; // swap(arr[start],arr[end])
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    printarr(arr,n);
}
*/


//Binary search;
int binSerch(int *arr,int n,int key){
    int st=0, end=n-1;
    while(st<=end){
        int mid=(st + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

/*int main(){
    int arr[]={2,4,6,8,10,12,16};
    int n=sizeof(arr)/sizeof(int);
    cout<<binSerch(arr,n,12);
    return 0;
}*/


///////////////////////

//pointer Arthmetic
int q7(){
 int a =5;
 int *ptr =&a;

 cout<<ptr<<"\n";//1st
 ptr++;
 cout<<ptr<<"\n";
 ptr--;
 cout<<ptr<<"\n";
    return 0;
}
//pointer addition substraction of constant

int q8(){
 int a =5;
 int *ptr =&a;
 cout<<ptr<<"\n";
 ptr=ptr+3;
 cout<<(ptr-3)<<"\n";
 return 0;
}
//array
void printArr(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*ptr<<"\n";
        ptr=ptr+1;
    }
}
/*int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printArr(arr,n);
    return 0;
}
*/

//Q.print SubArray

void printsubArr(int arr[],int n){
    for(int start=0; start<n;start++){
        for(int end=start;end<n; end++){
           // cout<<"("<<start<<","<<end<<")";
           for(int i=start;i<=end;i++){
            cout<<arr[i];
           }
           cout<<",";
        }
        cout<<endl;
    }
}

//Q.print  max subarray

void Maxsubarray(int arr[],int n){
    int maxsum=INT32_MIN;
   for(int start=0;start<n;start++){
      for(int end=start;end<n;end++){
         int currsum =0;
         for(int i=start;i<=end;i++){
            currsum +=arr[i];
         }
         cout<<currsum<<",";
         maxsum=max(maxsum,currsum);
      }
     cout<<endl;
   }
   cout<<"Maximum of subarray = "<<maxsum;
}

//Maxsuvaaray by using second approach//

void Maxsubarray1(int arr[],int n){
    int maxsum=INT32_MIN;
   for(int start=0;start<n;start++){
     int currsum =0;
      for(int end=start;end<n;end++){
         currsum += arr[end];
          maxsum=max(maxsum,currsum);
      }
   }
   cout<<"Maximum of subarray = "<<maxsum;
}

//kadan's algortihm
void Maxsubarray3(int *arr,int n){
    int maxsum = INT32_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum +=arr[i];
        maxsum= max(currsum,maxsum);
         if(currsum<0){
            currsum=0;
        }
    }
    cout<<"max subarr ="<<maxsum;
}

//Q.Stock Buy And Sell.

void maxprofit(int *prices,int n){
    int bestBuy[100000];
    bestBuy[0]=INT32_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
   
    }

    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currprofit =prices[i]-bestBuy[i];
        maxprofit=max(maxprofit,currprofit);
    }
      cout<<"max profit ="<<maxprofit<<endl;
}

//Water trapping.

void trap(int *height,int n){
    int leftmax[20000];
    leftmax[0]=INT32_MIN;
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);
        cout<<leftmax<<",";
    }
    cout<<endl;
}

//Bubble sort
void printarr3(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++ ) {
       for(int j=0;i<n-i-1;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
          }
       } 
    } 
    printarr3(arr,n); 
}
int main(){
   int arr[]={5,3,2,7,4};
   int n=sizeof(arr)/sizeof(int);
   bubblesort(arr,n);
   return 0;
}




