#include<bits/stdc++.h>
using namespace std;

bool check(string s,int i, int n, int key) {
   if(i>=n){
    return false;
   }
   if(s[i]==key){
    return true;
   }
   return check(s,i+1,n,key);
}

int main() {
    string s="DARSHIT PATEL";
    int i=0;
    char key = 'S';
    int n=s.length();
    bool ans=check(s,i,n,key);
    cout<<ans<<endl;
}
