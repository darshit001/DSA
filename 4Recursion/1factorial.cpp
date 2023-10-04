#include<bits/stdc++.h>
using namespace std;
 
int factorial(int n){
    if(n==1){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}

int main(){
    int ans;
    int n;
    cout<< "enter a number "<<endl;
    cin>>n;
    ans=factorial(n);
    cout<<"fac"<<ans<<endl;
}