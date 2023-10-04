#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   int ans=1;                 //o(logn) c
   while(b>0){
      if(b&1){
        ans=ans*a;
      }
      a=a*a;
      b=b/2;
   }
   cout<<ans<<endl;
}