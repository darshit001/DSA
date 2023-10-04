#include<bits/stdc++.h>
using namespace std;
 
int fibbo(int n){
    if(n==1 ){            //if(n==0 || n==1){return n}
        return 0; 
    }
    if(n==2){
        return 1;
    }
    int ans=fibbo(n-1)+ fibbo(n-2);
    return ans;
}

int main(){
    int ans;
    int n;
    cout<< "enter a number "<<endl;
    cin>>n;
    ans=fibbo(n);
    cout<<"fibbo "<<ans<<endl;
}