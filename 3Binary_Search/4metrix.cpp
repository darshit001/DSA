#include<iostream>
using namespace std;

int binry(int arr[][4],int rows,int cols,int tag) {
    int s=0;
    int e=rows*cols-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        int rowsindex=mid/cols;
        int colsindex=mid%cols;
        if(arr[rowsindex][colsindex]==tag){
            return true;
            
        }
        if(arr[rowsindex][colsindex]<tag){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2; 
    }
    return false;
}

int main() {
  int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
  int rows=5;
  int cols=4;
  int tag=166;
   
   bool ans=binry(arr,rows,cols,tag);
   if(ans){
    cout<<"found"<<endl;
    // cout<<"rows is "<<rowsindex<<endl;
    // cout<<"cols is"<<colsindex<<endl;
   }
   else{
    cout<<"not found"<<endl;
   }

  
    return 0;
}
