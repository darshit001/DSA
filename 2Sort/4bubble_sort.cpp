#include<iostream>
using namespace std;
 
int bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        //if array is already sorted
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;   //if inner loop(j) is not run any time(a<b,b<c,c<d) so array are already sorted
        }
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int a[7]={1,2,3,4,5,6,7};
   bubble(a,7);
   print(a,7);
}