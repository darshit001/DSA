#include<iostream>
using namespace std;
 
int selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min])
        min=j;
    }
    swap(arr[min],arr[i]);
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[6]={2,1,4,2,6,3};
   selection(a,6);
   print(a,6);
//    cout<<"sorted array is"<<print(a,6)<<endl;
}