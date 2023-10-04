#include<bits/stdc++.h>
using namespace std;
 
void count(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    count(n-1);
}

int main(){
    int ans;
    int n;
    cout<< "enter a number "<<endl;
    cin>>n;
    count(n);
    
}