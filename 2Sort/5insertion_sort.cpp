#include<iostream>
using namespace std;
 
int insertion(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shifting 
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[7]={1,2,3,4,5,6,7};
   insertion(a,7);
   print(a,7);
}