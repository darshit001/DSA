#include<bits/stdc++.h>
using namespace std;

void findmiss(int *a,int n){
    for(int i=0;i<n;i++){
        int index=abs(a[i]);
        if(a[index-1]>0){
            a[index-1]*=-1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(a[i]>0){
            cout<<i+1<<endl;
        }
    }
}


int main(){
    int n;
    int a[]={1,2,4,4,5};
    n=sizeof(a)/sizeof(int);
    findmiss(a,n);
    return 0;
}